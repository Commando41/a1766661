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

module.exports = router;
