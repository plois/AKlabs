# Лабораторна робота №3

### Можливі ключі
    --help, -h => довідка
    --version, -v => версія

### Приклади
    $ ./output --help -h --help
    help...
---
    $ ./output -v --version=1.0.1
    version: 1.0
    
    $ ./output --version=1.0.1 -v1 -v
    version: 1.0.1
---
    $ ./output -h --help --help --years=91 -v2.0 --version=1.3.3 --unknownoperator
    help...
    Version: 2.0
    ./output: unrecognized option '--unknownoperator'
    unexpected value