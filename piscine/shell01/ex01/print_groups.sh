#!/bin/bash

id -Gn $FT_USER=nours| sed 's/ /,/g'
