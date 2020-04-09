var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});

var timestamp = "";
router.get('/last.txt', function(req, res, next) {
  res.send(timestamp+"");
  timestamp = new Date();
});


var Cindex = 1;
var text_color = "";
router.get('/color.html', function(req, res, next) {
    if(Cindex == 1){
        text_color = "red";
    }else if (Cindex == 2){
        text_color = "yellow";
    }else if(Cindex == 3){
        text_color = "green";
    }else if(Cindex == 4){
        text_color = "blue";
    }
    if(Cindex == 4){
        Cindex = 1;
    }else{
        Cindex++;
    }
  res.send('\
<!DOCTYPE html>\
<html lang="en-US">\
<head>\
  <meta charset="UTF-8">\
 <title>Express</title>\
</head>\
<body>\
  <h1 style="color:' + text_color + '">' + text_color + '</h1>\
</body>\
</html>\
');
});

//var counted=0;
var mess="";
//var recording;
var index;
router.get('/log.html', function(req, res, next){
    var recording= new Date();
    //counted++;
  //  for(index = 0; index < counted; index++)
//    {
        mess = mess + '<li>' + recording + '</li>';
//    }

    res.send('<!DOCTYPE html> \
    <html lang="en-US">\
        <head>\
            <title>LOL</title>\
            <meta charset="UTF-8"\
        </head>\
        <body>\
        <ul>'+mess+'</ul> \
        </body>\
    </html>');
});

module.exports = router;
