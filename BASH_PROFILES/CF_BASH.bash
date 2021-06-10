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
alias subl="C:/Program\ Files/Sublime\ Text\ 3/sublime_text.exe"


function open() {
    subl $1/$1.cpp
}

LAST=""

function remp() {
    rm -r Problem$1.cpp
}

function run() {
    str=$1
    if [ "$1" == "" ]; then
        str=$LAST
    else
        LAST=$1
    fi
    i=$((${#str}-1))
    dir=${str:$i:1}
    if [ -f $dir/Output/$str ] && [ "$2" == "N" ]; then
        echo "This file already exists"
    else
        g++ Problem$str.cpp -std=c++17 -o $str
        ./$str
        wait
        if [ ! -d $dir/Output ]; then
            mkdir $dir/Output
        fi
        mv $str $dir/Output/$str
    fi

}

function file() {
    touch output.txt input.txt
}

function filesort() {
    str=$1
    i=$((${#str}-1))
    dir=${str:$i:1}
    mv Problem$1.cpp $dir/Problem$1.cpp
    if [ ! -d $dir/Output ]; then
            mkdir $dir/Output
    fi
    mv output.txt $dir/Output/$1.txt
    rem input.txt
}

function create() {
    touch Problem$1.cpp
    cat ~/Documents/CompetitiveProgramming/CP/Template.cpp > Problem$1.cpp
    str=$1
    i=$((${#str}-1))
    var=${str:$i:1}
    if [ ! -d $var ]; then
        mkdir $var
    fi
    LAST=$1
    subl Problem$1.cpp
}

function comp() {
    COMP_BASH
    if [ "$1" == "EDU" ]; then
        str="EDU"$2
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
    str=$1
    if [ "$1" == "" ]; then
        str=$LAST
    fi
    i=$((${#str}-1))
    dir=${str:$i:1}
    mv Problem$str.cpp $dir/Problem$str.cpp
}

function race() {
    CP
    cf race $1
    wait
    cd "Competitions/$1"
}

function cases() {
    cd $1
    cf test
    wait
    cd ..
}

function give() {
    cd $1
    cf submit
    wait
    cd ..
}


TIME=`date +"%I:%M:%S %p"`
function title() {
    TIME=`date +"%I:%M:%S %p"`
    PS1='\[\033]0;$TITLEPREFIX:$PWD\007\]''\n''\[\033[32m\]''[''$TIME'']''\[\033[36m\]'' \w''\n''\[\033[39m\]''$ '
}
trap "title" DEBUG

