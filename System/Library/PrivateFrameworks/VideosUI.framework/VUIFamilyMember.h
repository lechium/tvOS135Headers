/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIFamilyMemberDelegate;
@class NSNumber, NSString, UIImage;

@interface VUIFamilyMember : NSObject {

	BOOL _sharingPurchases;
	NSNumber* _memberIdentifier;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _accountName;
	UIImage* _memberImage;
	id<VUIFamilyMemberDelegate> _delegate;

}

@property (nonatomic,retain) NSNumber * memberIdentifier;                              //@synthesize memberIdentifier=_memberIdentifier - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                      //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * accountName;                                   //@synthesize accountName=_accountName - In the implementation block
@property (assign,nonatomic) BOOL sharingPurchases;                                    //@synthesize sharingPurchases=_sharingPurchases - In the implementation block
@property (nonatomic,retain) UIImage * memberImage;                                    //@synthesize memberImage=_memberImage - In the implementation block
@property (assign,nonatomic,__weak) id<VUIFamilyMemberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)hash;
-(id<VUIFamilyMemberDelegate>)delegate;
-(void)setDelegate:(id<VUIFamilyMemberDelegate>)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)accountName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setSharingPurchases:(BOOL)arg1 ;
-(NSNumber *)memberIdentifier;
-(BOOL)sharingPurchases;
-(UIImage *)memberImage;
-(void)setMemberIdentifier:(NSNumber *)arg1 ;
-(void)setMemberImage:(UIImage *)arg1 ;
@end
