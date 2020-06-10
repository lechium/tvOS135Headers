/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
#import <AppleAccountUI/AppleAccountUI-Structs.h>
@class ACAccount, ACAccountStore, AAGrandSlamSigner, CNContactStore, CNMonogrammer, NSOperationQueue;

@interface AAUIProfilePictureStore : NSObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAGrandSlamSigner* _grandSlamSigner;
	CNContactStore* _contactStore;
	id<NSObject> _contactStoreDidChangeObserver;
	CNMonogrammer* _monogrammer;
	NSOperationQueue* _networkingQueue;
	os_unfair_lock_s _monogrammerLock;
	double _pictureDiameter;
	long long _monogramType;

}

@property (assign,nonatomic) double pictureDiameter;              //@synthesize pictureDiameter=_pictureDiameter - In the implementation block
@property (assign,nonatomic) long long monogramType;              //@synthesize monogramType=_monogramType - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 ;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(void)_contactStoreDidChange:(id)arg1 ;
-(double)pictureDiameter;
-(void)_beginObservingContactStoreDidChangeNotifications;
-(id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 ;
-(void)_endObservingContactStoreDidChangeNotifications;
-(long long)monogramType;
-(void)_invalidateMonogrammer;
-(void)setMonogramType:(long long)arg1 ;
-(id)profilePictureForAccountOwnerWithoutMonogramFallback;
-(id)_fallbackProfilePictureForPersonWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)_correctlySizedImageFromImage:(id)arg1 ;
-(id)_meCardPicture;
-(void)_fetchProfilePictureForAccountOwnerFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_contactSyncsWithiCloud:(id)arg1 error:(id*)arg2 ;
-(void)_updateServerProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2 ;
-(id)_profilePictureForFamilyMemberWithoutMonogramFallback:(id)arg1 ;
-(id)_familyMemberPersonPicture:(id)arg1 ;
-(void)_fetchProfilePictureForFamilyMemberFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchAndCacheRawImageAndCropRectWithRequest:(id)arg1 personID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_meCardRawImageAndCropRect:(/*^block*/id)arg1 ;
-(void)_familyMember:(id)arg1 rawImageAndCropRect:(/*^block*/id)arg2 ;
-(id)_monogrammer;
-(void)_fetchProfilePictureSupersetWithRequest:(id)arg1 personID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchProfilePictureWithRequest:(id)arg1 personID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)cacheablePictureForPicture:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)_monogrammedContactImage:(id)arg1 ;
-(void)_decodeImageAndCropRectForContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_contactWithImageDataMatchingFamilyMember:(id)arg1 error:(id*)arg2 ;
-(id)_getAccountIdentifierForContact:(id)arg1 error:(id*)arg2 ;
-(void)_updateServerProfilePictureWithRequest:(id)arg1 ;
-(id)_profilePictureForPicture:(id)arg1 crop:(BOOL)arg2 cropRect:(CGRect)arg3 cacheable:(BOOL)arg4 ;
-(id)initWithAppleAccount:(id)arg1 store:(id)arg2 ;
-(long long)pictureStyle;
-(void)setPictureDiameter:(double)arg1 ;
-(void)setPictureStyle:(long long)arg1 ;
-(id)profilePictureForAccountOwner;
-(void)fetchProfilePictureForAccountOwner:(/*^block*/id)arg1 ;
-(void)setProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2 ;
-(id)profilePictureForFamilyMember:(id)arg1 ;
-(void)fetchProfilePictureForFamilyMember:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchRawImageAndCropRectForAccountOwner:(/*^block*/id)arg1 ;
-(void)fetchRawImageAndCropRectForFamilyMember:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)profilePictureForPicture:(id)arg1 ;
-(id)profilePictureForPicture:(id)arg1 cropRect:(CGRect)arg2 ;
@end

