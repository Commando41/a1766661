var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});

var timestamp = "true";
router.get('/last.txt', function(req, res, next) {
    if(timestamp == "true"){
        timestamp = new Date();
        res.end();
    } else {
         res.send(timestamp+"");
         timestamp = new Date();
    }
});

var Cindex = 0;
var text_color = ["red", "yellow", "green", "blue"];
var chose = "";
router.get('/color.html', function(req, res, next) {
    if(Cindex >= 4){
        Cindex=0;
    }
    chose = text_color[Cindex];
    Cindex++;
  res.send('<!DOCTYPE html>\
<html lang="en-US">\
<head>\
  <meta charset="UTF-8">\
 <title>Express</title>\
</head>\
<body>\
  <h1 style="color:' + chose + '">' + chose + '</h1>\
</body>\
</html>\
');
});

var mess="";
var index;
router.get('/log.html', function(req, res, next){
    var recording= new Date();
    mess = mess + '<li>' + recording + '</li>';
    res.send('<!DOCTYPE html> \
    <html lang="en-US">\
        <head>\
            <title>LOL</title>\
            <meta charset="UTF-8">\
        </head>\
        <body>\
        <ul>'+mess+'</ul> \
        </body>\
    </html>');
});

var Cind = 0;
var textColor = ["red", "yellow", "green", "blue"];
var selected = "";
router.get('/color.txt', function(req, res, next) {
    if(Cind >= 4){
        Cind=0;
    }
    selected = textColor[Cind];
    Cind++;
    res.send(selected);
});

var acc = false;
router.get('/accept', function(req, res, next) {
    res.sendStatus(200);
    acc = true;
});

router.get('/content.ajax', function(req, res, next) {
    if (acc == true){
        res.send('<p>para 1</p>\
                  <p>para 2');
    }
    else if(acc == false)
    {
        res.sendStatus(403);
    }
});

module.exports = router;