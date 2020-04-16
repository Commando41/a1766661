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

var images = [
    { uri:'photo-1539154444419-e31272d30a31.jpg', description:'medium-coated black-and-white dog near grass during daytime' },
    { uri:'photo-1553882809-a4f57e59501d.jpg',    description:'black and tan Belgian dog' },
    { uri:'photo-1554196721-b507d7e86ee9.jpg',    description:'gray dog standing on grass' },
    { uri:'photo-1555661059-7e755c1c3c1d.jpg',    description:'black dog behind plants' },
    { uri:'photo-1555991415-1b04a71f18c5.jpg',    description:'adult white Samoyed beside man and woman' },
    { uri:'photo-1558121591-b684092bb548.jpg',    description:'white and black dog lying on sofa' },
    { uri:'photo-1559440165-065646588e9a.jpg',    description:'person holding dog leash short-coat black and white dog' },
    { uri:'photo-1560160643-7c9c6cb07a8b.jpg',    description:'short-coated brown and white dog' },
    { uri:'photo-1562220058-1a0a019ab606.jpg',    description:'pet dog laying on sofa' },
    { uri:'photo-1565194481104-39d1ee1b8bcc.jpg', description:'short-coated gray dog' }
];

var task4_7req = 0;
router.get('/images.json', function(req, res, next) {
    res.send(images[task4_7req]);
    task4_7req++;
    if (task4_7req == 10){
        task4_7req = 0;
    }
});

module.exports = router;