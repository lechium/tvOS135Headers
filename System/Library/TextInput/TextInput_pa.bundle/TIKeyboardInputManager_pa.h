/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/TextInput/TextInput_pa.bundle/TextInput_pa
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_pa : TIKeyboardInputManager {

	BOOL _isPhoneticLayout;

}

@property (assign,nonatomic) BOOL isPhoneticLayout;              //@synthesize isPhoneticLayout=_isPhoneticLayout - In the implementation block
-(void)syncToLayoutState:(id)arg1 ;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)setIsPhoneticLayout:(BOOL)arg1 ;
-(BOOL)isPhoneticLayout;
@end

