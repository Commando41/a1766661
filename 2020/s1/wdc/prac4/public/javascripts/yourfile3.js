function pageContent(){
 //Create a request
  var xhttp = new XMLHttpRequest();
  //Define a function
  xhttp.onreadystatechange = function(){
    if(this.readyState == 4)
    {
        if(this.status == 200){
            document.Body.innerHTML = this.responseText;
        }
        else if(this.status == 403){
            var p = document.createElement('p');
            var but = document.createElement('button');
            p.innerText = "PLease accept the T & C's!";
            but.innerText = "Accept!";
            but.onclick = "YES()";
            but.type = "button";
            but.name = "YES";
            document.getElementById('Lolo').appendChild(p);
            document.getElementById('Lolo').appendChild(but);
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
    document.getElementById('Lolo').style.display = "none";
    pageContent();
    }
  };

  xhttp.open("GET", "/accept", true);

  xhttp.send();
}