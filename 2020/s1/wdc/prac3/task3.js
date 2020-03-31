var p = 0;
var posting = document.getElementById("posts");
var noder = 0;
var hide = document.getElementsByName("visible")[0].value;
function addOne()
{
    p += 1;
    document.getElementById("mcount").innerText = p;

}

function postStuff()
{
    var loop = document.getElementsByName("quantity")[0].value;
    for(let o = 1; o <= loop; o++)
    {
    var post_con = document.createElement("p");
    post_con.className = "post-content";
    var post_t = document.createElement("pre");
    post_t.className = "post-time";
//    butto = document.createElement("BUTTON");
//    butto.onclick = "removing()";
//    butto.innerText = "X";
    noder = noder + 1;
    post_t.innerHTML = new Date();

    post_con.innerHTML = document.getElementsByClassName("postText")[0].value;
    var coloring = document.getElementsByName("color");
    var styled = document.getElementsByName("style");

    //Checks for the colour chosen
    if(coloring[0].checked == true)
    {
        post_con.style.color=coloring[0].value;
    }else if(coloring[1].checked == true)
    {
        post_con.style.color=coloring[1].value;
    }

    //Check if bold button is selected
    if(styled[0].checked == true)
    {
        post_con.style.fontWeight = "bold";
    }

    //Checks if italics button is chosen
    if(styled[1].checked == true)
    {
        post_con.style.fontStyle = "italic";
    }

  //  myDivo = document.createElement("DIV");
//    myDivo.append(post_t, butto);
    if(noder >= hide)
    {
        post_t.style.display = "none";
        post_con.style.display = "none";
    }
    posting.appendChild(post_t);
    posting.appendChild(post_con);
    }
    showOnly();
   // if(document.getElementsByName("visible").max)
}

function showOnly()
{
    var con = document.getElementsByClassName("post-content");
    var tin = document.getElementsByClassName("post-time");
    hide = document.getElementsByName("visible")[0].value;
    for(let i = con.length-1; i>=0; i--)
    {
        con[i].style.display = "none";
        tin[i].style.display = "none";
    }
    for(let i = 0; i < hide; i++)
    {
        tin[i].style.display = "block";
        con[i].style.display = "block";
    }
}

//This function hides the main div
function hideMain()
{
    document.getElementById("main").style.display = "none";
    document.getElementById("menu").style.display = "block";

}

//This function hides the menu div
function hideMenu()
{
    document.getElementById("menu").style.display = "none";
    document.getElementById("main").style.display = "block";
}

//This function changes the background
function changeBackColor()
{
    document.body.style.background = document.getElementById("back").value;
}

//function removing()
//{
//    posting.removeChild(posting.childNode[]);
//}