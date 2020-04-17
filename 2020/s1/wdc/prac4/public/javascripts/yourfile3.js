function pageContent(){
 //Create a request
  var xhttp = new XMLHttpRequest();
  //Define a function
  xhttp.onreadystatechange = function(){
    if(this.readyState == 4)
    {
        if(this.status == 200){
            document.querySelector('body').innerHTML = "<h1>header</h1>" + this.responseText;
        }
        else if(this.status == 403){
            document.querySelector('div').innerHTML = '<h1>header</h1><p>Please accept Ts & Cs!</p><button onclick="YES()" type="button" name="button">Accept!</button>';
        }

    }
  };
  //Open a xhttp request
  xhttp.open("GET", "/content.ajax", false);
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

  xhttp.open("GET", "/accept", false);

  xhttp.send();
}