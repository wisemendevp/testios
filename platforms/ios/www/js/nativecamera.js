var nativecamera = {
getPicture: function(success, failure){
    cordova.exec(success, failure, "nativecamera", "openCamera", []);
}
};