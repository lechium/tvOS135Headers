/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextFieldDelegate <NSObject>
@optional
-(BOOL)textFieldShouldBeginEditing:(id)arg1;
-(void)textFieldDidBeginEditing:(id)arg1;
-(BOOL)textFieldShouldEndEditing:(id)arg1;
-(void)textFieldDidEndEditing:(id)arg1;
-(void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3;
-(void)textFieldDidChangeSelection:(id)arg1;
-(BOOL)textFieldShouldClear:(id)arg1;
-(BOOL)textFieldShouldReturn:(id)arg1;

@end

