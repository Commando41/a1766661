// task4.2
function colChan(){

 //Create a request
  var xhttp = new XMLHttpRequest();
  //Define a function
  xhttp.onreadystatechange = function(){
    if(this.readyState == 4 && this.status == 200)
    {
      document.getElementsByClassName('lols')[0].innerText = this.responseText;
      document.getElementsByClassName('lols')[0].style.color = this.responseText;
    }
  };
  //Open a xhttp request
  xhttp.open("GET", "/color.txt", true);
  //Send a request
  xhttp.send();
}