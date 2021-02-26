// Beginner Series #2 Clock

int past(int h, int m, int s) {

    //  <----  hajime!
    int milliseconds = (h*60*60*1000) + (m*60*1000) + (s * 1000);
    
    return milliseconds;

}