var express = require('express');
var router = express.Router();

/* GET users listing. */
router.get('/', function(req, res, next) {
  res.send('respond with a resource');
});

router.get('/getposts', function(req,res,next){
    if(req.query.m){
        var mpost = [];
        var m = req.query.m;
        if(posts.length < n)
        {
            res.json(posts);
        }   else    {
            var l=0;
            while (l < n)
            {
                mposts.push(posts[l]);
                res.json(mposts);
                l++;
            }
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

module.exports = router;
