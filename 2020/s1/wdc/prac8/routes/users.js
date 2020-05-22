var express = require('express');
var router = express.Router();

/* GET users listing. */
router.get('/', function(req, res, next) {
  res.send('respond with a resource');
});

router.get('/getposts', function(req,res,next){
    if(req.query.n){
        let mpost = [];
        let m = req.query.n;
        if(things.length < m)
        {
            res.json(things);
        }   else    {
            let l=0;
            while (l < m)
            {
                mpost.push(things[l]);
                l++;
            }
            res.json(mpost);
        }
    }else{
        res.json(things);
    }
});

var things = [];
router.post('/addpost', function(req,res,next){
    things.unshift(req.body);
    res.end();
});

//task1.6
router.get('/getposts/id/:n', function(req,res,next){

    var length = req.params.n;
    res.json(things[(things.length)-(length)-1]);

});

module.exports = router;
