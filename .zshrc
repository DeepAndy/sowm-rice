# The following lines were added by compinstall
zstyle :compinstall filename '/home/cf/.zshrc'

autoload -Uz compinit
compinit

HISTFILE=/dev/null
HISTSIZE=0
SAVEHIST=0
set --brace-expand
set --extended-glob
set --no-unset
set --notify-le
set -o noclobber


HISTFILE=/dev/null
HISTSIZE=50
alias l="ls -gA"
alias vim="nvim"
alias poweroff="loginctl poweroff"
alias reboot="loginctl reboot"
alias suspend="loginctl suspend"
alias xu="doas xbps-install -Suv"
alias xi="doas xbps-install"
alias xs="xbps-query -Rs"
alias xl="xbps-query -l"
alias xr="doas xbps-remove -R"
alias ls="ls --color=always"
alias q="exit"
alias sudo="doas"
alias mic="micro"
alias gotop="gotop -l kitchensink"

#BUSYBOX ALIASES
alias wget="busybox wget"

PROMPT='%F{green}[%F{reset}%n@%m%F{green}] %F{cyan}%~ %F{reset}%# '

if [ $(echo $TTY | cut -b 1-8) != "/dev/tty" ]
then
	cfetch-yel
fi
#alias neofetch="neofetch --w3m /usr/share/void-artwork/void-transparent.png --size 100px --xoffset 10 --yoffset 10 | tr -d :" 


source /usr/share/zsh/plugins/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh
