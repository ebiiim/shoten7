
= この記事の要約

アプリケーションを実装するにあたり、エラーハンドリングは非常に重要です。しかし、エラー管理がデフォルトでは非常にシンプルです。カスタマイズをしなければ不便であるところは欠点でありつつもの、逆にしっかりとカスタマイズをすれば非常に強力なツールとなりえます。この記事ではpkg/errorsライブラリや、GopherCon2019のセッション"Handling go errors",そしてAthensプロジェクトでのエラーハンドリングの
実例を通して、実用にみあったエラーハンドリング処理の書き方をお伝えできればと思っています。

= エラーハンドリングで満たしたい要件

= エラーハンドリングがうまく行っていない

業務で書いてみた。
→エラーが追いづらいので階層化はした
→うまく階層化されておらず、２階層下のエラー情報が取れない
→pkg/errorsで書き直した。

= pkg/errorsできることを正しく理解する
== pkg/errorsライブラリできること
== pkg/errorsはどのように階層化したエラーの起点のエラーを取得しているか
== pkg/errorsはどのようにスタックトレースをとっているか
== pkg/errorsライブラリできないこと

= error handling in goで述べられていたこと

== pkg/errorsライブラリできないこと

= athensのエラーハンドリング

= まとめ

= 参考

