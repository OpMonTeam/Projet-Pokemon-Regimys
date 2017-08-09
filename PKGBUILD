# Contributor: Navet56 <evandib@gmail.com> 
# Maintainer: Navet56 <evandib@gmail.com> 

pkgname=opmon
pkgver=0.12.1
pkgrel=1 
license=('GPL') 
arch=('x86_64') 
pkgdesc="A open source RPG monster fighting game" 
url="http://opmon-game.ga" 
depends=('sfml' 'gcc' 'libstdc++5' 'smpeg') 
makedepends=('make') 
source=(https://github.com/jlppc/OpMon/raw/master/opmon-arch.tar.gz) 
md5sums=('d2e57cac05ea80823dd61bb40e9b00cf') 

build() { 
cd $srcdir/opmon-arch

make || return 1 
 
mkdir -p $pkgdir/usr/bin/
mkdir -p $pkgdir/usr/share/OpMon/

cp exeLinux/OpMon $pkgdir/usr/bin/
chmod +x $pkgdir/usr/bin
cp arch_install/bin/usr/share/OpMon $pkgdir/usr/share/OpMon
cp arch_install/bin/usr/share/applications $pkgdir/usr/share/applications
}

package() 
{
  cd "$srcdir/opmon-arch"
  make DESTIDIR="$pkgdir" install	
}