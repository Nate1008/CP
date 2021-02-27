# Setting PATH for Python 3.8
# The original version is saved in .bash_profile.pysave
PATH="/Library/Frameworks/Python.framework/Versions/3.8/bin:${PATH}"
PATH="/usr/local/bin/subl:${PATH}"
export PATH

alias obash='vim ~/.bash_profile'
alias bash='nano ~/.bash_profile'
alias CP='cd ~/Documents/CompetitiveProgramming/CP'
alias IOI='cd ~/Documents/CompetitiveProgramming/RoadToIOI'
alias CSES='cd ~/Documents/CompetitiveProgramming/CP/CSES'
alias CF='cd ~/Documents/CompetitiveProgramming/CP/CodeForces'
alias COMP='cd ~/Documents/CompetitiveProgramming/CP/Competitions'
alias BASH='cd ~/Documents/CompetitiveProgramming/CP/BASH_PROFILES'
alias COMP_BASH='BASH; cat COMP_BASH.bash > ~/.bash_profile; src; COMP'
alias CF_BASH='BASH; cat CF_BASH.bash > ~/.bash_profile; src; CF'
alias CSES_BASH='BASH; cat CSES_BASH.bash > ~/.bash_profile; src; CSES'
alias IOI_BASH='BASH; cat IOI_BASH.bash > ~/.bash_profile; src; IOI'
alias src='source ~/.bash_profile'
alias rem='rm -r'
alias sync="git pull origin master"
alias save="git push origin master"
alias issue="git commit -m I.R"
alias update="git add .; git commit -m Updating...; git push origin master; clear"
alias cfpy="python ~/Documents/Applications/CF/cf.py"

function try() {
    g++ $1.cpp -std=c++17 -o $1
    ./$1
    wait
    rm $1
}

function start() {
    mkdir "$2""$1"
    cd "$2""$1"
    setup "$2""1"
    setup "$2""2"
    setup "$2""3"
    setup "$2""4"
    setup "$2""5"
}

function setup() {
    touch $1.cpp
    cat ~/Documents/CompetitiveProgramming/RoadToIOI/CCC/CCC.cpp > $1.cpp
}

TIME=`date +"%I:%M:%S %p"`
function title() {
    TIME=`date +"%I:%M:%S %p"`
    PS1='\[\033]0;$TITLEPREFIX:$PWD\007\]''\n''\[\033[32m\]''[''$TIME'']''\[\033[36m\]'' \w''\n''\[\033[39m\]''$ '
}
trap "title" DEBUG

