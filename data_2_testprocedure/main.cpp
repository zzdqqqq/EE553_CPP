testprocedure() {
    int p[] r = generatenrandomnumbers();
    
    foreach trial
    // golden mean search determines which k to try
    int [] copy = r; // copy the array
    knuthQuicksort(copy);// whth k = ???
}

/*
 output should be:
 
 k = 2 took: xxx seconds
 k = 1000 took: yyy seconds
 k = 425 took aaa seconds
 k = 575 took bbb seconds
 ///
 
 
 best time k - ttt took xxx seconds
 */
