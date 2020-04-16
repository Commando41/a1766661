function pageContent(){
 //Create a request
  var xhttp = new XMLHttpRequest();
  //Define a function
  xhttp.onreadystatechange = function(){
    if(this.readyState == 4)
    {
        if(this.status == 200){
            document.getElementById('Lolo').innerHTML = this.responseText;
        }
        else if(this.status == 403){
            document.getElementById('Lolo').style.display = "block";
        }

    }
  };
  //Open a xhttp request
  xhttp.open("GET", "/content.ajax", true);
  //Send a request
  xhttp.send();
}

function YES(){

  var xhttp = new XMLHttpRequest();

  xhttp.onreadystatechange = function(){
    if(this.readyState == 4 && this.status == 200)
    {
    document.getElementById('TC').style.display = "none";
    document.getElementById('butto').style.display = "none";
    pageContent();
    }
  };

  xhttp.open("GET", "/accept", true);

  xhttp.send();
}