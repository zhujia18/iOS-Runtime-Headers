/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUSearchFieldConfiguration, NSArray, NSString, UIImage, NSURL;

@interface SUSection : NSObject {
    NSString *_identifier;
    UIImage *_image;
    NSString *_imageBaseName;
    BOOL _isDefaultSection;
    BOOL _isLocationSection;
    NSArray *_itemImages;
    NSInteger _minimumNetworkType;
    UIImage *_moreListImage;
    NSString *_partnerHeader;
    SUSearchFieldConfiguration *_searchFieldConfiguration;
    UIImage *_selectedImage;
    UIImage *_selectedMoreListImage;
    NSString *_title;
    NSInteger _type;
    NSURL *_url;
    NSString *_urlBagKey;
}

@property(retain) NSString *identifier;
@property(retain) UIImage *image;
@property(retain) NSArray *itemImages;
@property(retain) UIImage *moreListImage;
@property(retain) NSString *partnerHeader;
@property(retain) SUSearchFieldConfiguration *searchFieldConfiguration;
@property(retain) UIImage *selectedImage;
@property(retain) UIImage *selectedMoreListImage;
@property(retain) NSString *title;
@property(retain) NSURL *url;
@property(retain) NSString *urlBagKey;
@property(getter=isDefaultSection) BOOL defaultSection;
@property(getter=isLocationSection) BOOL locationSection;
@property NSInteger minimumNetworkType;
@property(getter=isTransient,readonly) BOOL transient;
@property NSInteger type;
@property(getter=isUsingLocalArtwork,readonly) BOOL usingLocalArtwork;

- (NSInteger)_minimumNetworkTypeFromDictionary:(id)arg1;
- (NSInteger)_typeForString:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)image;
- (id)initWithDictionary:(id)arg1 searchField:(id)arg2;
- (BOOL)isDefaultSection;
- (BOOL)isLocationSection;
- (BOOL)isTransient;
- (BOOL)isUsingLocalArtwork;
- (id)itemImages;
- (NSInteger)minimumNetworkType;
- (id)moreListImage;
- (id)partnerHeader;
- (id)searchFieldConfiguration;
- (id)selectedImage;
- (id)selectedMoreListImage;
- (void)setDefaultSection:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setItemImages:(id)arg1;
- (void)setLocationSection:(BOOL)arg1;
- (void)setMinimumNetworkType:(NSInteger)arg1;
- (void)setMoreListImage:(id)arg1;
- (void)setPartnerHeader:(id)arg1;
- (void)setSearchFieldConfiguration:(id)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setSelectedMoreListImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (id)title;
- (NSInteger)type;
- (id)url;
- (id)urlBagKey;

@end
