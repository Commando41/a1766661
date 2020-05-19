var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});

var mess = 'first';
router.post('/pass-it-on', function(req, res, next){
   if((req.body.constructor === Object && Object.keys(req.body).length === 0) || !('message' in req.body)){
       res.send(400);
   }else
   {
       res.send(mess);
       mess = req.body.message;
   }
});

router.get('/brew', function(req, res, next) {
   if(req.query.drink == 'tea')
   {
       res.send("a delicious cup of tea!");
   }
   else if(req.query.drink == 'coffee')
   {
       res.send(418);
   }
   else
   {
       res.send(400);
   }
});

router.post('/combine', function(req,res,next){
    let stuff = req.body;
    let things = '';
    for(line in stuff.lines){
       things += stuff.lines[line] + stuff.suffix + '\n';
    }
    res.send(things);

});

module.exports = router;
