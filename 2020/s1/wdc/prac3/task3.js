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

function hide()
{
    var m = document.getElementById("main");
    var l = document.getElementById("menu");
    if(m.style.display === "block")
    {
        m.style.display = "none";
        l.style.display = "block";
    }else{
        m.style.display = "block";
        l.style.display = "none";
    }
}