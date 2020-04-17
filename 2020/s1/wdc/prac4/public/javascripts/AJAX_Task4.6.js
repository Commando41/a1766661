//var img = document.createElement('img');
//var p = document.createElement('p');

function gellPics(){

  var xhttp = new XMLHttpRequest();

  xhttp.onreadystatechange = function()
  {
    if(this.readyState == 4 && this.status == 200)
    {
      let pic = JSON.parse(xhttp.responseText);
      let imgage = document.getElementById('cocos');
      imgage.src = "images/" + pic.uri;
      imgage.alt = "images/" + pic.description;
      document.getElementById('months').innerHTML = pic.description;
    }
  };

  xhttp.open("GET", "/images.json", true);

  xhttp.send();
}

var time = setInterval(gellPics, 10000);