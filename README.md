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
    'theme'=>'tomk79\pickles2\themes\prototype1\theme::exec' , 
];
```


## レイアウト - Layouts

- default
- top
- popup
- plain
- naked
- fullcolumn


## ライセンス - License

MIT License


## 作者 - Author

- (C)Tomoya Koyanagi <tomk79@gmail.com>
- website: <http://www.pxt.jp/>
- Twitter: @tomk79 <http://twitter.com/tomk79/>


