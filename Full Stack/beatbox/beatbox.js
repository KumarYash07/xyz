console.log("Welcome to Beatbox");

let songIndex = 0;
let audioElement = new Audio('songs/1.mp3');
let masterPlay = document.getElementById('masterPlay');
let progressbar = document.getElementById('progressbar');
let gif = document.getElementById('gif');
let masterSongName = document.getElementById('masterSongName');
let songItems = Array.from(document.getElementsByClassName('SongItem'));
let starting = document.getElementById("starting-time");
let result=false;
let volumeLabel = document.getElementById('volumeLabel');
let audioPlayer = document.getElementById('songitemconatiner');
let volumebar = document.getElementById('volumebar');
let volumeMute = document.getElementById('volumeMute');

let songs = [
    { songName: "Amplifier-Imraan Khan", filePath: "songs/1.mp3", coverPath: "covers/amplifier.jpg" },
    { songName: "BlueEyes-Yo Yo Honey Singh", filePath: "songs/2.mp3 ", coverPath: "covers/BlueEyes.jpg" },
    { songName: "Desi-Kalakaar-Yo Yo Honey SIngh", filePath: "songs/3.mp3", coverPath: "covers/desikalakar.webp" },
    { songName: "Zara Sa--KK,Prittam", filePath: "songs/4.mp3", coverPath: "covers/jarasa.webp" },
    { songName: "Despacito---Luis-Fonsi", filePath: "songs/5.mp3", coverPath: "covers/despacito.jpg" },
    { songName: "Alan Walker Sabrina Carpenter & Farruko - On My Way", filePath: "songs/6.mp3", coverPath: "covers/on my way.jpg" },
    { songName: "Alan Walker - Faded", filePath: "songs/7.mp3", coverPath: "covers/faded.jpg" },
]

songItems.forEach((element, i) => {
    element.getElementsByTagName("img")[0].src = songs[i].coverPath;
    element.getElementsByClassName("songName")[0].innerText = songs[i].songName;
})

//audioElement.play();

//handle play/pause click
masterPlay.addEventListener('click', () => {
    if (audioElement.paused || audioElement.currentTime <= 0) {
        audioElement.play();
        masterPlay.classList.remove('fa-circle-play');
        masterPlay.classList.add('fa-circle-pause');
        gif.style.opacity = 1;
        result=true;
    }
    else {
        audioElement.pause();
        masterPlay.classList.remove('fa-circle-pause');
        masterPlay.classList.add('fa-circle-play');
        gif.style.opacity = 0;
        result=false;
    }
})

//progressbar
//  progressbar updation
audioElement.addEventListener('timeupdate', () => {
    console.log('timeupdate');
    //update seekbar
    progress = parseInt((audioElement.currentTime / audioElement.duration) * 100);
    console.log(progress);
    progressbar.value = progress;
})

progressbar.addEventListener('change', () => {
    audioElement.currentTime = progressbar.value * audioElement.duration / 100;
})

// songlist play/pause controller
const makeAllPlays = () => {
    Array.from(document.getElementsByClassName('songItemPlay')).forEach((element) => {
        element.classList.remove('fa-pause-circle');
        element.classList.add('fa-play-circle');
        result=true;
    })
}

//container song list play button controller
Array.from(document.getElementsByClassName('songItemPlay')).forEach((element) => {
    element.addEventListener('click', (e) => {
        console.log(e.target);

        // Get the index of the clicked song
        let clickedSongIndex = parseInt(e.target.id);

        // If the clicked song is already playing then pause it
        if (songIndex === clickedSongIndex && !audioElement.paused) {
            audioElement.pause();
            e.target.classList.remove('fa-pause-circle');
            e.target.classList.add('fa-play-circle');
            gif.style.opacity = 0;
            masterPlay.classList.remove('fa-circle-pause');
            masterPlay.classList.add('fa-circle-play');
        } 
        // If it's a new song or the current song is paused, play it
        else {
            makeAllPlays(); 
            songIndex = clickedSongIndex;
            e.target.classList.remove('fa-play-circle');
            e.target.classList.add('fa-pause-circle');
            audioElement.src = `songs/${songIndex + 1}.mp3`;
            masterSongName.innerText = songs[songIndex].songName;
            audioElement.currentTime = 0;
            audioElement.play();
            gif.style.opacity = 1;
            masterPlay.classList.remove('fa-circle-play');
            masterPlay.classList.add('fa-circle-pause');
        }
    });
});


//next button
document.getElementById('next').addEventListener('click', () => {
    if (songIndex >= 6) {
        songIndex = 0
    }
    else {
        songIndex += 1;
    }
    //updation
    audioElement.src = `songs/${songIndex + 1}.mp3`;
    masterSongName.innerText = songs[songIndex].songName;
    audioElement.currentTime = 0;
    audioElement.play();
    gif.style.opacity = 1;
    masterPlay.classList.remove('fa-circle-play');
    masterPlay.classList.add('fa-circle-pause');
})

//previous button
document.getElementById('previous').addEventListener('click', () => {
    if (songIndex <= 0) {
        songIndex = 0
    }
    else {
        songIndex -= 1;
    }
    //updation
    audioElement.src = `songs/${songIndex + 1}.mp3`;
    masterSongName.innerText = songs[songIndex].songName;
    audioElement.currentTime = 0;
    audioElement.play();
    gif.style.opacity = 1;
    masterPlay.classList.remove('fa-circle-play');
    masterPlay.classList.add('fa-circle-pause');
})

// Display song duration and current time
const updateTimers = () => {
    // Format time in MM:SS
    const formatTime = (time) => {
        const minutes = Math.floor(time / 60);
        const seconds = Math.floor(time % 60);
        return `${minutes}:${seconds < 10 ? '0' + seconds : seconds}`;
    };

    // Update current time dynamically
    audioElement.addEventListener('timeupdate', () => {
        const currentTime = audioElement.currentTime;
        starting.innerText = formatTime(currentTime);

        // Update progress bar value
        const progress = (currentTime / audioElement.duration) * 100;
        progressbar.value = progress;
    });

    // Set duration once the song loaded
    audioElement.addEventListener('loadedmetadata', () => {
        const duration = audioElement.duration;
        document.getElementById('ending-time').innerText = formatTime(duration);
    });
};
updateTimers();


//volumebar
//initial volume
audioElement.volume = volumebar.value;;
// Update volume when slider changes
volumebar.addEventListener('input', (event) => {
    const volume = event.target.value;
    audioElement.volume = volume;
     // Adjust volume 
    volumeLabel.textContent = `Volume: ${Math.round(volume * 100)}%`; 
});


//Autoplay next song
audioElement.addEventListener('ended',()=> {
    //Increment song index or loop back to first song
    // if(songIndex >= songs.length - 1) {
    //     songIndex = 0;
    // }
    // else {
    //     songIndex += 1;
    // }
    
    //check if the played song is the last song then exit the loop
    if (songIndex >= songs.length - 1) {
        console.log("Last song finished. Stopping playback.");
        audioElement.pause(); 
        audioElement.currentTime = 0; 
        masterPlay.classList.remove('fa-circle-pause');
        masterPlay.classList.add('fa-circle-play');
        gif.style.opacity = 0; 
        return; 
    }
    
    //otherwise
    //update song and play next
    songIndex += 1;
    audioElement.src = songs[songIndex].filePath;
    masterSongName.innerText = songs[songIndex].songName;
    audioElement.currentTime = 0;    
    audioElement.play();
    gif.opacity = 1;
    masterPlay.classList.remove('fa-circle-play');
    masterPlay.classList.add('fa-circle-pause');

    //updat play/pause icon in song list
    makeAllPlays();
    document.getElementById(songIndex).classList.remove('fa-play-circle');
    document.getElementById(songIndex).classList.add('fa-pause-circle');
});

// Handle Mute/Unmute
let lastVolume = audioElement.volume; 
volumeMute.addEventListener('click', () => {
    if (audioElement.volume > 0) {
        lastVolume = audioElement.volume; 
        audioElement.volume = 0; 
        volumebar.value = 0; 
        volumeLabel.textContent = "Volume: 0%";
    } else {
        audioElement.volume = lastVolume; 
        volumebar.value = lastVolume; 
        volumeLabel.textContent = `Volume: ${Math.round(lastVolume * 100)}%`;
    }
});