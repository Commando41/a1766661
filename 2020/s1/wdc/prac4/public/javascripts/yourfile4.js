function gellPics(){

  var xhttp = new XMLHttpRequest();

  xhttp.onreadystatechange = function() {
    if(this.readyState == 4 && this.status == 200){
        document.getBody.innerHTML = this.responseText;
    }
  };

  xhttp.open("GET", "/images.json", true);

  xhttp.send();
}