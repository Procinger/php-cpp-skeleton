# PHP-CPP Skeleton Extension

### Installation instructions on Ubuntu 14.04 LTS

Install required packages
```
sudo apt-get install php5-dev

```

Install PHP-CPP
```
git clone https://github.com/CopernicaMarketingSoftware/PHP-CPP.git
cd PHP-CPP
make
sudo make install
```

Building the skeleton extension
```
make
sudo make install
```

Verify that the extension is loaded
```
php -m
[PHP Modules]
...
php-cpp-skeleton
...
```
