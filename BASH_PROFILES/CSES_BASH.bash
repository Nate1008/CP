# Setting PATH for Python 3.8
# The original version is saved in .bash_profile.pysave
PATH="/usr/local/bin:${PATH}"
PATH="/Desktop/OCV_GR.7/Programming/WEBDRIVER/chromedriver:${PATH}"⁩
PATH="/Library/Frameworks/Python.framework/Versions/3.7/bin:${PATH}"
PATH="/Library/Frameworks/Python.framework/Versions/3.9/bin:${PATH}"
PATH="/Library/Frameworks/Python.framework/Versions/3.8/bin:${PATH}"
PATH="/usr/local/bin/subl:${PATH}"
export PATH

alias vim='/usr/local/Cellar/vim/8.2.2000/bin/vim'
alias desktop='cd ~/Desktop'
alias obash='clion ~/.bash_profile'
alias abash='atom ~/.bash_profile'
alias bash='vim ~/.bash_profile'
alias CP='cd ~/Documents/CompetitiveProgramming/CP'
alias CCC='cd ~/Documents/CompetitiveProgramming/CCC'
alias CSES='cd ~/Documents/CompetitiveProgramming/CP/CSES'
alias CF='cd ~/Documents/CompetitiveProgramming/CP/CodeForces'
alias COMP='cd ~/Documents/CompetitiveProgramming/CP/Competitions'
alias BASH='cd ~/Documents/CompetitiveProgramming/CP/BASH_PROFILES'
alias COMP_BASH='BASH; cat COMP_BASH.bash > ~/.bash_profile; src; COMP'
alias CF_BASH='BASH; cat CF_BASH.bash > ~/.bash_profile; src; CF'
alias CSES_BASH='BASH; cat CSES_BASH.bash > ~/.bash_profile; src; CSES'
alias src='source ~/.bash_profile'
alias rem='rm -r'
alias sync="git pull origin master"
alias save="git push origin master"
alias issue="git commit -m I.R"
alias update="git add .; git commit -m Updating...; git push origin master; clear"
alias GR7="cd ~/Desktop/OCV_GR.7"
alias homework="python3.9 ~/Documents/Applications/Homework/homework.py"
alias cfpy="python ~/Documents/Applications/CF/cf.py"
alias meet="python3.9 ~/Desktop/OCV_GR.7/Programming/Meet.py"
alias setup="FLASK_APP=server.py FLASK_ENV=development FLASK_DEBUG=1 "
alias tf="python3.8"
LAST=""
function init() {
	cd ~/Documents/Applications/AI
	if [ ! -d $1 ]; then
		mkdir $1
	fi
	cp AIFramework/NeuralNetwork.py $1/AI.py
	cd $1
	clion .
}


function remp() {
    rm -r Problem$1.cpp
}

function run() {
    str=$1
    if [ "$1" == "" ]; then
        str=$LAST
    else
        LAST=$str
    fi
   if [ -f Output/$str ] && [ "$2" == "N" ]; then
        echo "This file already exists"
    else
        g++ $str.cpp -std=c++17 -o $str
        ./$str
        wait
        if [ ! -d Output ]; then
            mkdir Output
        fi
        mv $str Output/$str
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
    touch $1.cpp
    cat ~/Documents/CompetitiveProgramming/CP/Template.cpp > $1.cpp
    if [ ! -d Problems ]; then
        mkdir Problems
    fi
    LAST=$1
}

function comp() {
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
    str=$1
    if [ "$1" == "" ]; then
        str=$LAST
    fi
    mv $str.cpp Problems/$str.cpp
    update
}

TIME=`date +"%I:%M:%S %p"`
function title() {
    TIME=`date +"%I:%M:%S %p"`
    PS1='\[\033]0;$TITLEPREFIX:$PWD\007\]''\n''\[\033[32m\]''[''$TIME'']''\[\033[36m\]'' \w''\n''\[\033[39m\]''$ '
}
trap "title" DEBUG
