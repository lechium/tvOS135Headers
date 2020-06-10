/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/_TVRCMediaRemoteKeyboardAdapterDelegate.h>
#import <TVRemoteCore/_TVRXKeyboardImpl.h>

@class _TVRXKeyboardController, _TVRCMRTelevisionWrapper, TVRCKeyboardAttributes, _TVRCMediaRemoteKeyboardAdapter, NSString;

@interface _TVRCMediaRemoteLegacyKeyboardImpl : NSObject <_TVRCMediaRemoteKeyboardAdapterDelegate, _TVRXKeyboardImpl> {

	BOOL _editing;
	_TVRXKeyboardController* _keyboardController;
	_TVRCMRTelevisionWrapper* _television;
	TVRCKeyboardAttributes* _currentAttributes;
	_TVRCMediaRemoteKeyboardAdapter* _adapter;

}

@property (assign,nonatomic) BOOL editing;                                                     //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) TVRCKeyboardAttributes * currentAttributes;                       //@synthesize currentAttributes=_currentAttributes - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteKeyboardAdapter * adapter;                        //@synthesize adapter=_adapter - In the implementation block
@property (assign,nonatomic,__weak) _TVRXKeyboardController * keyboardController;              //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;                            //@synthesize television=_television - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)attributes;
-(id)text;
-(void)setText:(id)arg1 ;
-(_TVRCMediaRemoteKeyboardAdapter *)adapter;
-(BOOL)isEditing;
-(void)setAdapter:(_TVRCMediaRemoteKeyboardAdapter *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(_TVRCMRTelevisionWrapper *)television;
-(TVRCKeyboardAttributes *)currentAttributes;
-(BOOL)editing;
-(_TVRXKeyboardController *)keyboardController;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)setKeyboardController:(_TVRXKeyboardController *)arg1 ;
-(void)_textEditingHandlerUpdatedWithEvent:(unsigned)arg1 session:(id)arg2 ;
-(void)_sessionDidBegin:(id)arg1 ;
-(void)_sessionDidEnd:(id)arg1 ;
-(void)_sessionTextDidChange:(id)arg1 ;
-(void)_sessionAttributesDidChange:(id)arg1 ;
-(void)keyboardAdapter:(id)arg1 receivedUnexpectedTextUpdate:(id)arg2 ;
-(void)sendReturnKey;
-(void)setCurrentAttributes:(TVRCKeyboardAttributes *)arg1 ;
@end

