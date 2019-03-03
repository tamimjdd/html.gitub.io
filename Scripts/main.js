var myImage = document.querySelector('img');

myImage.onclick = function() {
    var mySrc = myImage.getAttribute('src');
    if(mySrc === 'images/school.jpg') {
      myImage.setAttribute ('src','images/school2.jpg');
    } else {
      myImage.setAttribute ('src','images/school.jpg');
    }
}