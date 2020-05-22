var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var indexRouter = require('./routes/index');
var usersRouter = require('./routes/users');

var app = express();
var count = 1;

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());

app.use(function(req,res,next){
    console.log("Received " + count + "requests");
    count++;
    next();
});

app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);

app.use('/users/*', function(req,res,next){
    if(req.method === "POST"){
        console.log("POST from a user");
        next();
    }
    next();
});

app.use('/users', usersRouter);

module.exports = app;
