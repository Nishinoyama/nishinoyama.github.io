
var request = new XMLHttpRequest();
request.open("GET", "./text.json", false);
request.send(null);
let problem = JSON.parse(request.responseText);

const question = document.getElementById("question");
const answer = document.getElementById("answer");
const submission = document.getElementById("submission");
const subButton = document.getElementById("subButton");
let pro;

function setProblem() {
    const index = Math.floor(Math.random()*problem.length);
    pro = problem[index];

    question.value = pro[0];
    answer.value = "";
    submission.value = "";
    subButton.value = "sub!";
    subButton.onclick = ans;
}

function ans() {
    answer.value = pro[1];
    subButton.value = "next";
    subButton.onclick = setProblem;
}

window.onload = setProblem;
