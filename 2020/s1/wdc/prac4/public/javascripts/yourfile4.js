function gellPics(){

  var xhttp = new XMLHttpRequest();

  xhttp.onreadystatechange = function()
  {
    if(this.readyState == 4 && this.status == 200)
    {
      document.getElementById('mock').innerText = this.responseText;
      document.getElementById('mockery').src = this.responseText;
    }
  };

  xhttp.open("GET", "/images.json", true);

  xhttp.send();
}