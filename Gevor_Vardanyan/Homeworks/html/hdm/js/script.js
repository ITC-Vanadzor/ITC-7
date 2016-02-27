function showDiv(divId) {

    document.getElementById("forgotPassDiv").style.display = "none";
    document.getElementById("signInDiv").style.display = "none";
    document.getElementById("signUpDiv").style.display = "none";

    if (typeof divId === 'undefined') {
        divId = location.href.match('[?]..(.+?)$');
        if (divId) {
            divId = divId[1];
        }
    }

    if (!divId) {
        divId = 'signInDiv';
    }

    switch (divId) {
        case 'signUpDiv':
            document.title = "Create account";
            break;
        case 'forgotPassDiv':
            document.title = "Forgot password";
            break;
        default:
            document.title = "Sign In to HDM";
            divId = 'signInDiv';
            if (signIn()) {
                return;
            }

    }
    document.getElementById(divId).style.display = "block";
}



function signIn() {

    var email = location.href.match('email=(.+?)&');
    var pass = location.href.match('password=(.+?)#');


    if (email && pass) {
        if (email[1] == "Janoyan" && pass[1] == "student") {
            location.href = 'index.html';
            return 1;
        }
    }

    return 0;

}

function progressSteps(idProgress, idCircle, idStep) {

    document.getElementById("thirdStep").style.display = "none";
    document.getElementById("secondStep").style.display = "none";
    document.getElementById("firstStep").style.display = "none";

    document.getElementById(idStep).style.display = "block";


    document.getElementById("thirdCircle").style.background = "linear-gradient(to top, #0094F7, #007acc)";
    document.getElementById("secondCircle").style.background = "linear-gradient(to top, #0094F7, #007acc)";
    document.getElementById("firstCircle").style.background = "linear-gradient(to top, #0094F7, #007acc)";
    document.getElementById(idCircle).style.background = "#faaa80";

    document.getElementById("thirdProgress").style.background = "#bfbfbf";
    document.getElementById("secondProgress").style.background = "#bfbfbf";
    document.getElementById("firstProgress").style.background = "#bfbfbf";

    switch (idProgress) {
        case 'thirdProgress':
            document.getElementById("thirdProgress").style.background = "#007acc";
        case 'secondProgress':
            document.getElementById("secondProgress").style.background = "#007acc";
        case 'firstProgress':
            document.getElementById("firstProgress").style.background = "#007acc";
    }

    //  document.getElementById(divId).style.display="block";
}




function Database(name, date, time, money) {
    this.name = name;
    this.date = date;
    this.time = time;
    this.money = money;
}

function Date(day, month, year) {
    this.day = day;
    this.month = month;
    this.year = year;
    return this;
}
var myObj = {};
myObj[0] = new Database("Jan", new Date(3, 2, 2016), "10:47", 5000);
myObj[1] = new Database("Smile", new Date(23, 2, 2016), "13:47", 3000);
myObj[2] = new Database("Star", new Date(28, 3, 2016), "1:47", 1500);
myObj[3] = new Database("Jumper", new Date(3, 4, 2016), "11:15", 2010);
myObj[4] = new Database("Smile", new Date(15, 4, 2016), "10:47", 5700);
myObj[5] = new Database("Smile", new Date(1, 5, 2016), "10:47", 5000);
myObj[6] = new Database("Smile", new Date(3, 6, 2016), "10:47", 1000);
myObj[7] = new Database("Smile", new Date(12, 7, 2016), "10:47", 4110);
myObj[8] = new Database("Smile", new Date(3, 8, 2016), "10:47", 2200);
myObj[9] = new Database("Smile", new Date(7, 8, 2016), "10:47", 6100);




function showGraph() {
    var canvObj = document.getElementById("iGraph"),
        ctx = iGraph.getContext('2d');
    canvObj.width = 800;
    canvObj.height = 400;
    ctx.strokeStyle = 'blue'; // меняем цвет клеток
    ctx.strokeRect(0, 0, 800, 400);

    //X and Y coordinates
    ctx.lineWidth = 5;
    ctx.beginPath();
    ctx.moveTo(50, 50);
    ctx.lineTo(50, canvObj.height - 50);
    ctx.lineTo(canvObj.width - 50, canvObj.height - 50);
    ctx.stroke();

    var mnth = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jly", "Aug", "Sep", "Oct", "Nov", "Dec"];
    ctx.font = "15px Arial";
    for (i in mnth) {
        ctx.fillText(mnth[i], i * 60 + 55, canvObj.height - 30);
    }
    var money = [1000, 2000, 3000, 4000, 5000, 6000];
    for (i in money) {
        ctx.fillText(money[i], 10, (canvObj.height - 50) - (i * 55));
    }

    ctx.lineWidth = 4;
    ctx.strokeStyle = 'red';
    ctx.beginPath();
    x = (myObj[0].date.month - 1) * 60 + 55 + myObj[0].date.day;
    y = myObj[0].money * (canvObj.height - 50) / 6000;
    y = canvObj.height - y;
    ctx.moveTo(x, y);

    for (i in myObj) {
        x = (myObj[i].date.month - 1) * 60 + 55 + myObj[i].date.day;
        y = myObj[i].money * (canvObj.height - 50) / 6000;
        y = canvObj.height - y;
        ctx.lineTo(x, y);
        ctx.moveTo(x, y);
        ctx.stroke();
    }

}
