let backwardBtn = document.getElementById("backward-step");
let playStopBtn = document.getElementById("Play");
let stopIcon = document.getElementById("pause");
let forwardBtn = document.getElementById("forward-step");
let progaress = document.getElementById("myProgressBar");
let audio = document.getElementById("audio");
let playing = false;

function song() {
    progaress.max = audio.duration;
    progaress.value = audio.currentTime;
}

backwardBtn.addEventListener("click", () => {
    console.log("backward");
    // audio.addEventListener(audio);
});

playStopBtn.addEventListener("click", () => {
    console.log("play");
    if (playing == false) {
        playing = true;
        audio.play();
        stopIcon.classList.remove("hide");
        stopIcon.classList.add("show");
        // playStopBtn.classList.add("hide");
    }
    else if (playing == true){
        playing=false;
        audio.pause();
        // stopIcon.classList.remove("hide");
        // playStopBtn.classList.add("show");
    }

});

forwardBtn.addEventListener("click", () => {
    console.log("forward");
    // audio.addEventListener(audio);
});


