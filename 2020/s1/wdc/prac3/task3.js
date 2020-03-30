var p = 0;

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
    post_t.innerHTML = new Date();
    post_con.innerHTML = document.getElementsByClassName("postText")[0].value;
    var coloring = document.getElementsByName("color");

    if(coloring[0].checked == true)
    {
        post_con.style.color=coloring[0].value;
    }else if(coloring[1].checked == true)
    {
        post_con.style.color=coloring[1].value;
    }
    document.getElementById("posts").appendChild(post_t);
    document.getElementById("posts").appendChild(post_con);
    }
}

function hideMain()
{
    document.getElementById("main").style.display = "none";
    document.getElementById("menu").style.display = "block";

}

function hideMenu()
{
    document.getElementById("menu").style.display = "none";
    document.getElementById("main").style.display = "block";
}

function changeBackColor()
{
    document.body.style.background = document.getElementById("back").value;
}