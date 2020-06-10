/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIUpNextButtonProtocol;
@class VUIUpNextStateView, VUIButton, NSString;

@interface VUIUpNextButtonProperties : NSObject {

	BOOL _dismissOnSelect;
	BOOL _isWatchListed;
	VUIUpNextStateView* _addedStateView;
	VUIUpNextStateView* _removedStateView;
	VUIButton*<VUIUpNextButtonProtocol> _delegate;
	NSString* _canonicalID;

}

@property (nonatomic,retain) NSString * canonicalID;                                           //@synthesize canonicalID=_canonicalID - In the implementation block
@property (assign,nonatomic) BOOL isWatchListed;                                               //@synthesize isWatchListed=_isWatchListed - In the implementation block
@property (assign,nonatomic) BOOL dismissOnSelect;                                             //@synthesize dismissOnSelect=_dismissOnSelect - In the implementation block
@property (nonatomic,readonly) VUIUpNextStateView * addedStateView;                            //@synthesize addedStateView=_addedStateView - In the implementation block
@property (nonatomic,readonly) VUIUpNextStateView * removedStateView;                          //@synthesize removedStateView=_removedStateView - In the implementation block
@property (assign,nonatomic,__weak) VUIButton*<VUIUpNextButtonProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)configureWithElement:(id)arg1 existingButton:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(VUIButton*<VUIUpNextButtonProtocol>)delegate;
-(void)setDelegate:(VUIButton*<VUIUpNextButtonProtocol>)arg1 ;
-(NSString *)canonicalID;
-(BOOL)isWatchListed;
-(void)setCanonicalID:(NSString *)arg1 ;
-(VUIUpNextStateView *)addedStateView;
-(VUIUpNextStateView *)removedStateView;
-(void)updateButtonContentView;
-(void)callAPIAndToggleUpNextState;
-(BOOL)dismissOnSelect;
-(void)_errorInUpdatingState:(id)arg1 ;
-(void)setIsWatchListed:(BOOL)arg1 ;
-(void)setDismissOnSelect:(BOOL)arg1 ;
-(void)_toggleUpNextState;
@end

