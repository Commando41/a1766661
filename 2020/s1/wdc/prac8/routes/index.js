var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
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

module.exports = router;
