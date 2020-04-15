//task4.1
function goUP(){

  //Create a request
  var xhttp = new XMLHttpRequest();

  //Define a function
  xhttp.onreadystatechange = function(){
    if(this.readyState == 4 && this.status == 200 && this.responseText!='')
    {
      document.getElementsByTagName('p')[0].innerHTML = 'This page was last viewed ' + this.responseText;
    }
  };
  //Open a xhttp request
  xhttp.open("GET", "/last.txt", true);
  //Send a request
  xhttp.send();
}
