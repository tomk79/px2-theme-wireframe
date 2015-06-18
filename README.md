# tomk79/px2-theme-prototype1

## Setup

### composer.json にリポジトリを定義してロード

下記の要素を追記してください。

```
{
    "repositories": [
        {
            "type": "git",
            "url": "https://tomk79@bitbucket.org/tomk79/px2-theme-prototype1.git"
        }
    ] ,
    "require": {
        "tomk79/px2-theme-prototype1": "dev-master"
    }
}
```

### Pickles2 のコンフィグのテーマを差し替える

```
$conf->funcs->processor->html = [
    // テーマ
    'theme'=>'tomk79\pickles2\themes\prototype1\theme::exec()' , 
];
```

## 設定 - Options

```
$conf->funcs->processor->html = [
    // テーマ
    'theme'=>'tomk79\pickles2\themes\prototype1\theme::exec('.json_encode(array(
        'default'=>'2col_r',
        'copyright'=>'Your Name'
    )).')' , 
];
```

<dl>
    <dt>default</dt>
        <dd>デフォルトのレイアウト(default: 2col_r)</dd>
    <dt>copyright</dt>
        <dd>著作権者名 (default: ********)</dd>
</dl>


## レイアウト - Layouts

- default (= 2col_r)
- top
- popup
- plain
- naked
- 1col
- fullcolumn (= 1col)
- 2col_r
- 2col_l
- 3col
- nav_l
- nav_r
- onepage


## ライセンス - License

MIT License


## 作者 - Author

- (C)Tomoya Koyanagi <tomk79@gmail.com>
- website: <http://www.pxt.jp/>
- Twitter: @tomk79 <http://twitter.com/tomk79/>


