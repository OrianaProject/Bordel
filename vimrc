syntax on
set number

set shiftwidth=2
set tabstop=2
set autoindent
set smartindent

inoremap {      {}<Left>
inoremap {<CR>  {<CR>}<Esc>O
inoremap {{     {
inoremap {}     {}

inoremap (      ()<Left>
inoremap (<CR>  )<CR>)<Esc>O
inoremap ((     (
inoremap ()     ()

au WinEnter * set cursorcolumn
set cursorcolumn

highlight DoubleWhitespace ctermbg=red guibg=red
match DoubleWhitespace / \+\ \|\s\+\zs\n/
