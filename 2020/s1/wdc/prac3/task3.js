var p = 0;

function addOne()
{
    p += 1;
    document.getElementById("mcount").innerText = p;

}

function postStuff()
{

    var post_con = document.createElement("p");
    post_con.className = "post-content";
    var post_t = document.createElement("pre");
    post_t.className = "post-time";
    post_t.innerHTML = new Date();
    post_con.innerHTML = document.getElementsByClassName("postText")[0].value;
    var post_text = document.getElementById("posts");
    post_text.appendChild(post_t);
    post_text.appendChild(post_con);

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