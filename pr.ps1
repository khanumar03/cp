Param(
    [Parameter(Mandatory)]
    $msg
)

$check = Test-Path -Path .\example.js

if(!$check) {
    touch example.js
}
Write-Output "console.log('$msg')" >> example.js
node example.js