fontforge用にXQuartzが入っていなければインストール
https://xquartz.macosforge.org/landing/

Font Customインストール
http://fontcustom.com/

    ./setup.sh 
	 
必要なら`rbenv rehash`

libjpeg.8.dylibがないと怒られたので、

    brew remove jpeg
    brew install jpeg


フォントをビルド

    fontcustom compile --debug

