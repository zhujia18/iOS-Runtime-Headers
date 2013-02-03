/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptInterface, SUScriptDebugDelegate, SUWebViewDelegateProxy, NSMutableArray;

@interface SUWebView : UIWebView <SUScriptInterfaceDelegate> {
    unsigned int _openURLsExternally : 1;
    unsigned int _scrollingDisabled : 1;
    unsigned int _sourceIsTrusted : 1;
    SUScriptDebugDelegate *_debugDelegate;
    SUWebViewDelegateProxy *_delegateProxy;
    SUScriptInterface *_scriptInterface;
    NSMutableArray *_scrollRequests;
    NSInteger _synchronousLayoutCount;
}

@property <SUWebViewDelegate> *delegate;
@property(readonly) OpaqueJSContext *globalExecutionContext;
@property(readonly) SUScriptInterface *scriptInterface;
@property(readonly) NSString *title;
@property(readonly) WebDataSource *webDataSource;
@property(readonly) WebView *webView;
@property BOOL openURLsExternally;
@property(getter=isScrollingEnabled) BOOL scrollingEnabled;
@property BOOL sourceIsTrusted;
@property(readonly) id windowScriptObject;

- (id)_DOMDocument;
- (id)_callWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (void)_finishActiveScrollRequest;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForElement:(id)arg1;
- (id)_localStoragePath;
- (id)_newImageViewForElement:(id)arg1;
- (id)_newLabelForElement:(id)arg1 withText:(id)arg2;
- (void)_performNextScrollRequest;
- (void)_setRichTextReaderViewportSettings;
- (void)beginSynchronousLayout;
- (id)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (BOOL)copyImage:(struct CGImage {}**)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forElement:(id)arg3;
- (void)dealloc;
- (void)endSynchronousLayout;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForElementWithIdentifier:(id)arg1;
- (struct OpaqueJSContext { }*)globalExecutionContext;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isScrollingEnabled;
- (struct OpaqueJSContext { }*)javaScriptContextForScriptInterface:(id)arg1;
- (void)loadArchive:(id)arg1;
- (BOOL)openURLsExternally;
- (id)parentViewControllerForScriptInterface:(id)arg1;
- (void)reloadWindowScriptObject:(id)arg1;
- (void)resetScriptInterface;
- (void)scriptInterface:(id)arg1 animatePurchaseForIdentifier:(id)arg2;
- (void)scriptInterface:(id)arg1 parsedPropertyList:(id)arg2 ofType:(NSInteger)arg3;
- (void)scriptInterface:(id)arg1 receivedEventOfType:(NSInteger)arg2 userInfo:(id)arg3;
- (id)scriptInterface;
- (void)scrollElementToVisible:(id)arg1 animated:(BOOL)arg2 delegate:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)setOpenURLsExternally:(BOOL)arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setSourceIsTrusted:(BOOL)arg1;
- (BOOL)sourceIsTrusted;
- (void)stopLoading;
- (id)superviewForImageSheetForWebView:(id)arg1;
- (id)title;
- (id)webDataSource;
- (id)webView;
- (id)windowScriptObject;

@end
