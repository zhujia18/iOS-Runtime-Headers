/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, NSURLAuthenticationChallenge;

@interface NSURLConnectionInternal : NSObject {
    struct _CFURLConnection { } *cfConn;
    BOOL connectionActive;
    struct _CFURLAuthChallenge { } *currCFChallenge;
    NSURLAuthenticationChallenge *currNSChallenge;
    id delegate;
    NSURL *url;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*shouldSkipCancelOnRelease;
}

@end
