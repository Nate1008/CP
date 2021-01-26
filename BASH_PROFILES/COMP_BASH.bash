# Setting PATH for Python 3.8
# The original version is saved in .bash_profile.pysave
PATH="/Library/Frameworks/Python.framework/Versions/3.8/bin:${PATH}"
PATH="/usr/local/bin/subl:${PATH}"
export PATH

alias clion='open -na "CLion.app" --args "$@"'
alias desktop='cd ~/Desktop'
alias obash='clion ~/.bash_profile'
alias bash='nano ~/.bash_profile'
alias CP='cd ~/Documents/CompetitiveProgramming'
alias CSES='cd ~/Documents/CompetitiveProgramming/CP/CSES'
alias CF='cd ~/Documents/CompetitiveProgramming/CP/CodeForces'
alias COMP='cd ~/Documents/CompetitiveProgramming/CP/Competitions'
alias BASH='cd ~/Documents/CompetitiveProgramming/CP/BASH_PROFILES'
alias COMP_BASH='BASH; cat COMP_BASH.bash > ~/.bash_profile; src; COMP'
alias CF_BASH='BASH; cat CF_BASH.bash > ~/.bash_profile; src; CF'
alias CSES_BASH='BASH; cat CSES_BASH.bash > ~/.bash_profile; src; CSES'
alias src='source ~/.bash_profile'
alias rem='rm -r'

function remp() {
    rm -r $1.cpp
}

function run() {
    if [ -f Output/$1 ] && [ "$2" == "N" ]; then
        echo "This file already exists"
    else
        g++ $1.cpp -std=c++17 -o $1
        ./$1
        wait
        if [ ! -d Output ]; then
            mkdir Output
        fi
        mv $1 Output/$1
    fi
}

function file() {
    touch output.txt input.txt
}

function filesort() {
    mv $1.cpp Problems/$1.cpp
    mv output.txt Output/$1.txt
    rem input.txt
}
function create() {
    touch $1.cpp
    cat ~/Documents/CompetitiveProgramming/CP/Template.txt > $1.cpp
    if [ ! -d Problems ]; then
        mkdir Problems
    fi
}

function comp() {
    COMP_BASH
    if [ "$1" == "EDU" ]; then
        str=$2
    else 
        str=$1
    fi
    echo $str
    if [ -d $str ]; then
        cd $str
    else 
        mkdir $str
        cd $str
    fi
}


function sort() {
    mv $1.cpp Problems/$1.CompetitiveProgramming
}
