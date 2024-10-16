// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketClient/Public/FileFunctionsSocketClient.h"
#include "SocketClient/Public/SocketClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileFunctionsSocketClient() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_UFileFunctionsSocketClient();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_UFileFunctionsSocketClient_NoRegister();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions();
	SOCKETCLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile();
	UPackage* Z_Construct_UPackage__Script_SocketClient();
// End Cross Module References
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execcancelReadBytesFromFileInParts)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::cancelReadBytesFromFileInParts(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execreadBytesFromFileInPartsAsync)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FIntProperty,Z_Param_bufferSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delayBetweenReadsInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::readBytesFromFileInPartsAsync(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_bufferSize,Z_Param_delayBetweenReadsInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execcloseFile)
	{
		P_GET_STRUCT(FFileFunctionsSocketClientOpenFile,Z_Param_openFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::closeFile(Z_Param_openFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execaddBytesToFile)
	{
		P_GET_STRUCT(FFileFunctionsSocketClientOpenFile,Z_Param_openFile);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UFileFunctionsSocketClient::addBytesToFile(Z_Param_openFile,Z_Param_bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execopenFile)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFileFunctionsSocketClientOpenFile*)Z_Param__Result=UFileFunctionsSocketClient::openFile(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execint64ToString)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_num);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileFunctionsSocketClient::int64ToString(Z_Param_num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execdecryptMessageWithAES)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_encryptedBase64Message);
		P_GET_PROPERTY(FStrProperty,Z_Param_keyIn256Bit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileFunctionsSocketClient::decryptMessageWithAES(Z_Param_encryptedBase64Message,Z_Param_keyIn256Bit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execencryptMessageWithAES)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_PROPERTY(FStrProperty,Z_Param_keyIn256Bit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileFunctionsSocketClient::encryptMessageWithAES(Z_Param_message,Z_Param_keyIn256Bit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execdecryptFileWithAES)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_newFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_keyIn256Bit);
		P_GET_UBOOL(Z_Param_hasEncryptedFileSizeInFile);
		P_GET_PROPERTY(FInt64Property,Z_Param_originalFileSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::decryptFileWithAES(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_newFileName,Z_Param_keyIn256Bit,Z_Param_hasEncryptedFileSizeInFile,Z_Param_originalFileSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execencryptFileWithAES)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_newFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_keyIn256Bit);
		P_GET_UBOOL(Z_Param_writeEncryptedFileSizeToFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::encryptFileWithAES(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_newFileName,Z_Param_keyIn256Bit,Z_Param_writeEncryptedFileSizeToFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execgetAllFilesFromDirectory)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_count);
		P_GET_TARRAY_REF(FString,Z_Param_Out_files);
		P_GET_TARRAY_REF(FString,Z_Param_Out_filePaths);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::getAllFilesFromDirectory(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_count,Z_Param_Out_files,Z_Param_Out_filePaths,Z_Param_fileType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execcreateDirectory)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::createDirectory(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execgetFilenameOnDisk)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileFunctionsSocketClient::getFilenameOnDisk(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execgetAccessTimeStamp)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UFileFunctionsSocketClient::getAccessTimeStamp(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execsetTimeStamp)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_STRUCT(FDateTime,Z_Param_DateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::setTimeStamp(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_DateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execgetTimeStamp)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UFileFunctionsSocketClient::getTimeStamp(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execsetReadOnly)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL(Z_Param_bNewReadOnlyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::setReadOnly(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_bNewReadOnlyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execmoveFile)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryTypeTo);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePathTo);
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryTypeFrom);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePathFrom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::moveFile(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryTypeTo),Z_Param_filePathTo,EFileFunctionsSocketClientDirectoryType(Z_Param_directoryTypeFrom),Z_Param_filePathFrom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execisReadOnly)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::isReadOnly(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execdeleteDirectory)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::deleteDirectory(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execdeleteFileAbsolutePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::deleteFileAbsolutePath(Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execdeleteFile)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::deleteFile(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execfileSizeAbsolutePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UFileFunctionsSocketClient::fileSizeAbsolutePath(Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execfileSize)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UFileFunctionsSocketClient::fileSize(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execdirectoryExists)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::directoryExists(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execfileExistsAbsolutePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::fileExistsAbsolutePath(Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execfileExists)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsSocketClient::fileExists(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execfileToBase64String)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_base64String);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_fileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::fileToBase64String(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_success,Z_Param_Out_base64String,Z_Param_Out_fileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execbase64StringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_base64String);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UFileFunctionsSocketClient::base64StringToBytes(Z_Param_base64String,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execbytesToBase64String)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_base64String);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::bytesToBase64String(Z_Param_bytes,Z_Param_Out_base64String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execbase64StringToString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_string);
		P_GET_PROPERTY(FStrProperty,Z_Param_base64String);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::base64StringToString(Z_Param_Out_string,Z_Param_base64String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execstringToBase64String)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_string);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_base64String);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::stringToBase64String(Z_Param_string,Z_Param_Out_base64String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execgetMD5FromFileAbsolutePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MD5);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::getMD5FromFileAbsolutePath(Z_Param_filePath,Z_Param_Out_success,Z_Param_Out_MD5);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execgetMD5FromFile)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MD5);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::getMD5FromFile(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_success,Z_Param_Out_MD5);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execwriteStringToFile)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_ENUM(EFileFunctionsSocketClientEncodingOptions,Z_Param_fileEncoding);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::writeStringToFile(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_data,Z_Param_filePath,EFileFunctionsSocketClientEncodingOptions(Z_Param_fileEncoding),Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execreadStringFromFile)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::readStringFromFile(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_success,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execreadBytesFromFile)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UFileFunctionsSocketClient::readBytesFromFile(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execaddBytesToFileAndCloseIt)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::addBytesToFileAndCloseIt(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_bytes,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execwriteBytesToFile)
	{
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsSocketClient::writeBytesToFile(EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_bytes,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsSocketClient::execgetFileFunctionsSocketClientTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFileFunctionsSocketClient**)Z_Param__Result=UFileFunctionsSocketClient::getFileFunctionsSocketClientTarget();
		P_NATIVE_END;
	}
	void UFileFunctionsSocketClient::StaticRegisterNativesUFileFunctionsSocketClient()
	{
		UClass* Class = UFileFunctionsSocketClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addBytesToFile", &UFileFunctionsSocketClient::execaddBytesToFile },
			{ "addBytesToFileAndCloseIt", &UFileFunctionsSocketClient::execaddBytesToFileAndCloseIt },
			{ "base64StringToBytes", &UFileFunctionsSocketClient::execbase64StringToBytes },
			{ "base64StringToString", &UFileFunctionsSocketClient::execbase64StringToString },
			{ "bytesToBase64String", &UFileFunctionsSocketClient::execbytesToBase64String },
			{ "cancelReadBytesFromFileInParts", &UFileFunctionsSocketClient::execcancelReadBytesFromFileInParts },
			{ "closeFile", &UFileFunctionsSocketClient::execcloseFile },
			{ "createDirectory", &UFileFunctionsSocketClient::execcreateDirectory },
			{ "decryptFileWithAES", &UFileFunctionsSocketClient::execdecryptFileWithAES },
			{ "decryptMessageWithAES", &UFileFunctionsSocketClient::execdecryptMessageWithAES },
			{ "deleteDirectory", &UFileFunctionsSocketClient::execdeleteDirectory },
			{ "deleteFile", &UFileFunctionsSocketClient::execdeleteFile },
			{ "deleteFileAbsolutePath", &UFileFunctionsSocketClient::execdeleteFileAbsolutePath },
			{ "directoryExists", &UFileFunctionsSocketClient::execdirectoryExists },
			{ "encryptFileWithAES", &UFileFunctionsSocketClient::execencryptFileWithAES },
			{ "encryptMessageWithAES", &UFileFunctionsSocketClient::execencryptMessageWithAES },
			{ "fileExists", &UFileFunctionsSocketClient::execfileExists },
			{ "fileExistsAbsolutePath", &UFileFunctionsSocketClient::execfileExistsAbsolutePath },
			{ "fileSize", &UFileFunctionsSocketClient::execfileSize },
			{ "fileSizeAbsolutePath", &UFileFunctionsSocketClient::execfileSizeAbsolutePath },
			{ "fileToBase64String", &UFileFunctionsSocketClient::execfileToBase64String },
			{ "getAccessTimeStamp", &UFileFunctionsSocketClient::execgetAccessTimeStamp },
			{ "getAllFilesFromDirectory", &UFileFunctionsSocketClient::execgetAllFilesFromDirectory },
			{ "getFileFunctionsSocketClientTarget", &UFileFunctionsSocketClient::execgetFileFunctionsSocketClientTarget },
			{ "getFilenameOnDisk", &UFileFunctionsSocketClient::execgetFilenameOnDisk },
			{ "getMD5FromFile", &UFileFunctionsSocketClient::execgetMD5FromFile },
			{ "getMD5FromFileAbsolutePath", &UFileFunctionsSocketClient::execgetMD5FromFileAbsolutePath },
			{ "getTimeStamp", &UFileFunctionsSocketClient::execgetTimeStamp },
			{ "int64ToString", &UFileFunctionsSocketClient::execint64ToString },
			{ "isReadOnly", &UFileFunctionsSocketClient::execisReadOnly },
			{ "moveFile", &UFileFunctionsSocketClient::execmoveFile },
			{ "openFile", &UFileFunctionsSocketClient::execopenFile },
			{ "readBytesFromFile", &UFileFunctionsSocketClient::execreadBytesFromFile },
			{ "readBytesFromFileInPartsAsync", &UFileFunctionsSocketClient::execreadBytesFromFileInPartsAsync },
			{ "readStringFromFile", &UFileFunctionsSocketClient::execreadStringFromFile },
			{ "setReadOnly", &UFileFunctionsSocketClient::execsetReadOnly },
			{ "setTimeStamp", &UFileFunctionsSocketClient::execsetTimeStamp },
			{ "stringToBase64String", &UFileFunctionsSocketClient::execstringToBase64String },
			{ "writeBytesToFile", &UFileFunctionsSocketClient::execwriteBytesToFile },
			{ "writeStringToFile", &UFileFunctionsSocketClient::execwriteStringToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics
	{
		struct FileFunctionsSocketClient_eventaddBytesToFile_Parms
		{
			FFileFunctionsSocketClientOpenFile openFile;
			TArray<uint8> bytes;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_openFile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::NewProp_openFile = { "openFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventaddBytesToFile_Parms, openFile), Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile, METADATA_PARAMS(nullptr, 0) }; // 1622981194
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventaddBytesToFile_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventaddBytesToFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::NewProp_openFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "addBytesToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::FileFunctionsSocketClient_eventaddBytesToFile_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics
	{
		struct FileFunctionsSocketClient_eventaddBytesToFileAndCloseIt_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			TArray<uint8> bytes;
			bool success;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventaddBytesToFileAndCloseIt_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventaddBytesToFileAndCloseIt_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventaddBytesToFileAndCloseIt_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventaddBytesToFileAndCloseIt_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventaddBytesToFileAndCloseIt_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "addBytesToFileAndCloseIt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::FileFunctionsSocketClient_eventaddBytesToFileAndCloseIt_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics
	{
		struct FileFunctionsSocketClient_eventbase64StringToBytes_Parms
		{
			FString base64String;
			bool success;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_base64String;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::NewProp_base64String = { "base64String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventbase64StringToBytes_Parms, base64String), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventbase64StringToBytes_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventbase64StringToBytes_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventbase64StringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::NewProp_base64String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "base64StringToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::FileFunctionsSocketClient_eventbase64StringToBytes_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics
	{
		struct FileFunctionsSocketClient_eventbase64StringToString_Parms
		{
			FString string;
			FString base64String;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_string;
		static const UECodeGen_Private::FStrPropertyParams NewProp_base64String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventbase64StringToString_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::NewProp_base64String = { "base64String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventbase64StringToString_Parms, base64String), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::NewProp_string,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::NewProp_base64String,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "base64StringToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::FileFunctionsSocketClient_eventbase64StringToString_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics
	{
		struct FileFunctionsSocketClient_eventbytesToBase64String_Parms
		{
			TArray<uint8> bytes;
			FString base64String;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_base64String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventbytesToBase64String_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::NewProp_base64String = { "base64String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventbytesToBase64String_Parms, base64String), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::NewProp_base64String,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "bytesToBase64String", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::FileFunctionsSocketClient_eventbytesToBase64String_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics
	{
		struct FileFunctionsSocketClient_eventcancelReadBytesFromFileInParts_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventcancelReadBytesFromFileInParts_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventcancelReadBytesFromFileInParts_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::NewProp_filePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "cancelReadBytesFromFileInParts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::FileFunctionsSocketClient_eventcancelReadBytesFromFileInParts_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics
	{
		struct FileFunctionsSocketClient_eventcloseFile_Parms
		{
			FFileFunctionsSocketClientOpenFile openFile;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_openFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics::NewProp_openFile = { "openFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventcloseFile_Parms, openFile), Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile, METADATA_PARAMS(nullptr, 0) }; // 1622981194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics::NewProp_openFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "closeFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics::FileFunctionsSocketClient_eventcloseFile_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics
	{
		struct FileFunctionsSocketClient_eventcreateDirectory_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventcreateDirectory_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventcreateDirectory_Parms, path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventcreateDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventcreateDirectory_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "Comment", "/** Create a directory and return true if the directory was created or already existed. **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Create a directory and return true if the directory was created or already existed. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "createDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::FileFunctionsSocketClient_eventcreateDirectory_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics
	{
		struct FileFunctionsSocketClient_eventdecryptFileWithAES_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			FString newFileName;
			FString keyIn256Bit;
			bool hasEncryptedFileSizeInFile;
			int64 originalFileSize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_newFileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_keyIn256Bit;
		static void NewProp_hasEncryptedFileSizeInFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasEncryptedFileSizeInFile;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_originalFileSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdecryptFileWithAES_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdecryptFileWithAES_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_newFileName = { "newFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdecryptFileWithAES_Parms, newFileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_keyIn256Bit = { "keyIn256Bit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdecryptFileWithAES_Parms, keyIn256Bit), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_hasEncryptedFileSizeInFile_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventdecryptFileWithAES_Parms*)Obj)->hasEncryptedFileSizeInFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_hasEncryptedFileSizeInFile = { "hasEncryptedFileSizeInFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventdecryptFileWithAES_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_hasEncryptedFileSizeInFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_originalFileSize = { "originalFileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdecryptFileWithAES_Parms, originalFileSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventdecryptFileWithAES_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventdecryptFileWithAES_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_newFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_keyIn256Bit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_hasEncryptedFileSizeInFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_originalFileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|AES" },
		{ "Comment", "/**\n\x09* Decrypts an file that has been encrypted in AES with 256bit\n\x09* @param filePath The path must contain the file at the end.\n\x09* @param newFileName New name for the decrypted file without path. It can also take the same name of the dencrypted file. But the file will be overwritten. Possible data loss.\n\x09* @param keyIn256Bit The key must be a string with 32 characters. Please use ANSI characters only!\n\x09* @param hasEncryptedFileSizeInFile To decrypt the file correctly the size of the original file is needed. With true the size is read from the first 8 bytes in the file.\n\x09* @param originalFileSize To decrypt the file correctly the size of the original file is needed. If the size of the original file is not in the first bytes of the file, you must specify it here. \n\x09*/" },
		{ "CPP_Default_hasEncryptedFileSizeInFile", "true" },
		{ "CPP_Default_originalFileSize", "0" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Decrypts an file that has been encrypted in AES with 256bit\n@param filePath The path must contain the file at the end.\n@param newFileName New name for the decrypted file without path. It can also take the same name of the dencrypted file. But the file will be overwritten. Possible data loss.\n@param keyIn256Bit The key must be a string with 32 characters. Please use ANSI characters only!\n@param hasEncryptedFileSizeInFile To decrypt the file correctly the size of the original file is needed. With true the size is read from the first 8 bytes in the file.\n@param originalFileSize To decrypt the file correctly the size of the original file is needed. If the size of the original file is not in the first bytes of the file, you must specify it here." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "decryptFileWithAES", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::FileFunctionsSocketClient_eventdecryptFileWithAES_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics
	{
		struct FileFunctionsSocketClient_eventdecryptMessageWithAES_Parms
		{
			FString encryptedBase64Message;
			FString keyIn256Bit;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_encryptedBase64Message;
		static const UECodeGen_Private::FStrPropertyParams NewProp_keyIn256Bit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::NewProp_encryptedBase64Message = { "encryptedBase64Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdecryptMessageWithAES_Parms, encryptedBase64Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::NewProp_keyIn256Bit = { "keyIn256Bit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdecryptMessageWithAES_Parms, keyIn256Bit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdecryptMessageWithAES_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::NewProp_encryptedBase64Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::NewProp_keyIn256Bit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|AES" },
		{ "Comment", "/**\n\x09* Decrypts a Base64 string that has been encrypted in AES with 256bit and returns the string.\n\x09* @param message The string to be decrypted\n\x09* @param keyIn256Bit The key must be a string with 32 characters. Please use ANSI characters only!\n\x09*/" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Decrypts a Base64 string that has been encrypted in AES with 256bit and returns the string.\n@param message The string to be decrypted\n@param keyIn256Bit The key must be a string with 32 characters. Please use ANSI characters only!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "decryptMessageWithAES", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::FileFunctionsSocketClient_eventdecryptMessageWithAES_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics
	{
		struct FileFunctionsSocketClient_eventdeleteDirectory_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdeleteDirectory_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdeleteDirectory_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventdeleteDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventdeleteDirectory_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "Comment", "/** Delete a directory and return true if the directory was deleted or otherwise does not exist. **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Delete a directory and return true if the directory was deleted or otherwise does not exist. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "deleteDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::FileFunctionsSocketClient_eventdeleteDirectory_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics
	{
		struct FileFunctionsSocketClient_eventdeleteFile_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdeleteFile_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdeleteFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventdeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventdeleteFile_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "deleteFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::FileFunctionsSocketClient_eventdeleteFile_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics
	{
		struct FileFunctionsSocketClient_eventdeleteFileAbsolutePath_Parms
		{
			FString filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdeleteFileAbsolutePath_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventdeleteFileAbsolutePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventdeleteFileAbsolutePath_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketServer|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "deleteFileAbsolutePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::FileFunctionsSocketClient_eventdeleteFileAbsolutePath_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics
	{
		struct FileFunctionsSocketClient_eventdirectoryExists_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdirectoryExists_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventdirectoryExists_Parms, path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventdirectoryExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventdirectoryExists_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "directoryExists", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::FileFunctionsSocketClient_eventdirectoryExists_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics
	{
		struct FileFunctionsSocketClient_eventencryptFileWithAES_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			FString newFileName;
			FString keyIn256Bit;
			bool writeEncryptedFileSizeToFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_newFileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_keyIn256Bit;
		static void NewProp_writeEncryptedFileSizeToFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_writeEncryptedFileSizeToFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventencryptFileWithAES_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventencryptFileWithAES_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_newFileName = { "newFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventencryptFileWithAES_Parms, newFileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_keyIn256Bit = { "keyIn256Bit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventencryptFileWithAES_Parms, keyIn256Bit), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_writeEncryptedFileSizeToFile_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventencryptFileWithAES_Parms*)Obj)->writeEncryptedFileSizeToFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_writeEncryptedFileSizeToFile = { "writeEncryptedFileSizeToFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventencryptFileWithAES_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_writeEncryptedFileSizeToFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventencryptFileWithAES_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventencryptFileWithAES_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_newFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_keyIn256Bit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_writeEncryptedFileSizeToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|AES" },
		{ "Comment", "/**\n\x09* Encrypts an file with AES in 256bit\n\x09* @param filePath The path must contain the file at the end.\n\x09* @param newFileName New name for the encrypted file without path. It can also take the same name of the unencrypted file. But the file will be overwritten. Possible data loss.\n\x09* @param keyIn256Bit The key must be a string with 32 characters. Please use ANSI characters only!\n\x09* @param writeEncryptedFileSizeToFile To decrypt the file correctly the size of the original file is needed. With true the size is written as int64 (8 byte) at the beginning of the file. \n\x09*/" },
		{ "CPP_Default_writeEncryptedFileSizeToFile", "true" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Encrypts an file with AES in 256bit\n@param filePath The path must contain the file at the end.\n@param newFileName New name for the encrypted file without path. It can also take the same name of the unencrypted file. But the file will be overwritten. Possible data loss.\n@param keyIn256Bit The key must be a string with 32 characters. Please use ANSI characters only!\n@param writeEncryptedFileSizeToFile To decrypt the file correctly the size of the original file is needed. With true the size is written as int64 (8 byte) at the beginning of the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "encryptFileWithAES", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::FileFunctionsSocketClient_eventencryptFileWithAES_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics
	{
		struct FileFunctionsSocketClient_eventencryptMessageWithAES_Parms
		{
			FString message;
			FString keyIn256Bit;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FStrPropertyParams NewProp_keyIn256Bit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventencryptMessageWithAES_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::NewProp_keyIn256Bit = { "keyIn256Bit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventencryptMessageWithAES_Parms, keyIn256Bit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventencryptMessageWithAES_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::NewProp_keyIn256Bit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|AES" },
		{ "Comment", "/**\n\x09* Encrypts a string with AES in 256bit and returns the encrypted string as Base64 string.\n\x09* @param message The string to be encrypted\n\x09* @param keyIn256Bit The key must be a string with 32 characters. Please use ANSI characters only!\n\x09*/" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Encrypts a string with AES in 256bit and returns the encrypted string as Base64 string.\n@param message The string to be encrypted\n@param keyIn256Bit The key must be a string with 32 characters. Please use ANSI characters only!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "encryptMessageWithAES", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::FileFunctionsSocketClient_eventencryptMessageWithAES_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics
	{
		struct FileFunctionsSocketClient_eventfileExists_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileExists_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileExists_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventfileExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventfileExists_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "fileExists", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::FileFunctionsSocketClient_eventfileExists_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics
	{
		struct FileFunctionsSocketClient_eventfileExistsAbsolutePath_Parms
		{
			FString filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileExistsAbsolutePath_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventfileExistsAbsolutePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventfileExistsAbsolutePath_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "fileExistsAbsolutePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::FileFunctionsSocketClient_eventfileExistsAbsolutePath_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics
	{
		struct FileFunctionsSocketClient_eventfileSize_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileSize_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileSize_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "fileSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::FileFunctionsSocketClient_eventfileSize_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics
	{
		struct FileFunctionsSocketClient_eventfileSizeAbsolutePath_Parms
		{
			FString filePath;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileSizeAbsolutePath_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileSizeAbsolutePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "fileSizeAbsolutePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::FileFunctionsSocketClient_eventfileSizeAbsolutePath_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics
	{
		struct FileFunctionsSocketClient_eventfileToBase64String_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			bool success;
			FString base64String;
			FString fileName;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_base64String;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileToBase64String_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileToBase64String_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventfileToBase64String_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventfileToBase64String_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_base64String = { "base64String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileToBase64String_Parms, base64String), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventfileToBase64String_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_base64String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::NewProp_fileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "fileToBase64String", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::FileFunctionsSocketClient_eventfileToBase64String_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics
	{
		struct FileFunctionsSocketClient_eventgetAccessTimeStamp_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetAccessTimeStamp_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetAccessTimeStamp_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetAccessTimeStamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "Comment", "/** Return the last access time of a file. Returns FDateTime::MinValue() on failure **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Return the last access time of a file. Returns FDateTime::MinValue() on failure *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "getAccessTimeStamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::FileFunctionsSocketClient_eventgetAccessTimeStamp_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics
	{
		struct FileFunctionsSocketClient_eventgetAllFilesFromDirectory_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			int32 count;
			TArray<FString> files;
			TArray<FString> filePaths;
			FString fileType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FStrPropertyParams NewProp_files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePaths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_filePaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetAllFilesFromDirectory_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetAllFilesFromDirectory_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetAllFilesFromDirectory_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_files_Inner = { "files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_files = { "files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetAllFilesFromDirectory_Parms, files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_filePaths_Inner = { "filePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_filePaths = { "filePaths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetAllFilesFromDirectory_Parms, filePaths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetAllFilesFromDirectory_Parms, fileType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_filePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_filePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::NewProp_fileType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "CPP_Default_fileType", "*.*" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "getAllFilesFromDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::FileFunctionsSocketClient_eventgetAllFilesFromDirectory_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics
	{
		struct FileFunctionsSocketClient_eventgetFileFunctionsSocketClientTarget_Parms
		{
			UFileFunctionsSocketClient* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetFileFunctionsSocketClientTarget_Parms, ReturnValue), Z_Construct_UClass_UFileFunctionsSocketClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "getFileFunctionsSocketClientTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics::FileFunctionsSocketClient_eventgetFileFunctionsSocketClientTarget_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics
	{
		struct FileFunctionsSocketClient_eventgetFilenameOnDisk_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetFilenameOnDisk_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetFilenameOnDisk_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetFilenameOnDisk_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "Comment", "/** For case insensitive filesystems, returns the full path of the file with the same case as in the filesystem */" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "For case insensitive filesystems, returns the full path of the file with the same case as in the filesystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "getFilenameOnDisk", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::FileFunctionsSocketClient_eventgetFilenameOnDisk_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics
	{
		struct FileFunctionsSocketClient_eventgetMD5FromFile_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			bool success;
			FString MD5;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MD5;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetMD5FromFile_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetMD5FromFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventgetMD5FromFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventgetMD5FromFile_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_MD5 = { "MD5", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetMD5FromFile_Parms, MD5), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::NewProp_MD5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "getMD5FromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::FileFunctionsSocketClient_eventgetMD5FromFile_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics
	{
		struct FileFunctionsSocketClient_eventgetMD5FromFileAbsolutePath_Parms
		{
			FString filePath;
			bool success;
			FString MD5;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MD5;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetMD5FromFileAbsolutePath_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventgetMD5FromFileAbsolutePath_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventgetMD5FromFileAbsolutePath_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::NewProp_MD5 = { "MD5", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetMD5FromFileAbsolutePath_Parms, MD5), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::NewProp_MD5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "getMD5FromFileAbsolutePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::FileFunctionsSocketClient_eventgetMD5FromFileAbsolutePath_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics
	{
		struct FileFunctionsSocketClient_eventgetTimeStamp_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetTimeStamp_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetTimeStamp_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventgetTimeStamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "Comment", "/** Return the modification time of a file. Returns FDateTime::MinValue() on failure **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Return the modification time of a file. Returns FDateTime::MinValue() on failure *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "getTimeStamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::FileFunctionsSocketClient_eventgetTimeStamp_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics
	{
		struct FileFunctionsSocketClient_eventint64ToString_Parms
		{
			int64 num;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_num;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventint64ToString_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventint64ToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::NewProp_num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|String" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "int64ToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::FileFunctionsSocketClient_eventint64ToString_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics
	{
		struct FileFunctionsSocketClient_eventisReadOnly_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventisReadOnly_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventisReadOnly_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventisReadOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventisReadOnly_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "Comment", "/** Return true if the file is read only. **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Return true if the file is read only. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "isReadOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::FileFunctionsSocketClient_eventisReadOnly_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics
	{
		struct FileFunctionsSocketClient_eventmoveFile_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryTypeTo;
			FString filePathTo;
			EFileFunctionsSocketClientDirectoryType directoryTypeFrom;
			FString filePathFrom;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryTypeTo_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryTypeTo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePathTo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryTypeFrom_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryTypeFrom;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePathFrom;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_directoryTypeTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_directoryTypeTo = { "directoryTypeTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventmoveFile_Parms, directoryTypeTo), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_filePathTo = { "filePathTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventmoveFile_Parms, filePathTo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_directoryTypeFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_directoryTypeFrom = { "directoryTypeFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventmoveFile_Parms, directoryTypeFrom), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_filePathFrom = { "filePathFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventmoveFile_Parms, filePathFrom), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventmoveFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventmoveFile_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_directoryTypeTo_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_directoryTypeTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_filePathTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_directoryTypeFrom_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_directoryTypeFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_filePathFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "Comment", "/** Attempt to move a file. Return true if successful. Will not overwrite existing files. **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Attempt to move a file. Return true if successful. Will not overwrite existing files. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "moveFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::FileFunctionsSocketClient_eventmoveFile_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics
	{
		struct FileFunctionsSocketClient_eventopenFile_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			FFileFunctionsSocketClientOpenFile ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventopenFile_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventopenFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventopenFile_Parms, ReturnValue), Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile, METADATA_PARAMS(nullptr, 0) }; // 1622981194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "openFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::FileFunctionsSocketClient_eventopenFile_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_openFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_openFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics
	{
		struct FileFunctionsSocketClient_eventreadBytesFromFile_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			bool success;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventreadBytesFromFile_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventreadBytesFromFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventreadBytesFromFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventreadBytesFromFile_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventreadBytesFromFile_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"SocketClient|SpecialFunctions|File\")\n//\x09static void splittFile(EFileFunctionsSocketClientDirectoryType directoryType, FString filePath, int32 parts, bool& success);\n" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"SocketClient|SpecialFunctions|File\")\n       static void splittFile(EFileFunctionsSocketClientDirectoryType directoryType, FString filePath, int32 parts, bool& success);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "readBytesFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::FileFunctionsSocketClient_eventreadBytesFromFile_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics
	{
		struct FileFunctionsSocketClient_eventreadBytesFromFileInPartsAsync_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			int32 bufferSize;
			float delayBetweenReadsInSeconds;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_bufferSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delayBetweenReadsInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventreadBytesFromFileInPartsAsync_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventreadBytesFromFileInPartsAsync_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::NewProp_bufferSize = { "bufferSize", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventreadBytesFromFileInPartsAsync_Parms, bufferSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::NewProp_delayBetweenReadsInSeconds = { "delayBetweenReadsInSeconds", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventreadBytesFromFileInPartsAsync_Parms, delayBetweenReadsInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::NewProp_bufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::NewProp_delayBetweenReadsInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "Comment", "/**\n\x09* With this function you can read a file piece by piece. This reduces the RAM consumption to almost zero and files can be read in infinite size.\n\x09*@param bufferSize In bytes. This is the size of the file pieces that are being read.\n\x09*@param delayBetweenReadsInSeconds Specified in seconds. The higher the value, the slower the file is read (0.0001 minimum). When sending data over the network/internet, please make sure not to send data too fast. SSDs can read data much faster than you can send it over a network. This means that the data ends up in some buffers (RAM) and can also cause them to overflow.\n\x09*/" },
		{ "CPP_Default_bufferSize", "65536" },
		{ "CPP_Default_delayBetweenReadsInSeconds", "0.010000" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "With this function you can read a file piece by piece. This reduces the RAM consumption to almost zero and files can be read in infinite size.\n@param bufferSize In bytes. This is the size of the file pieces that are being read.\n@param delayBetweenReadsInSeconds Specified in seconds. The higher the value, the slower the file is read (0.0001 minimum). When sending data over the network/internet, please make sure not to send data too fast. SSDs can read data much faster than you can send it over a network. This means that the data ends up in some buffers (RAM) and can also cause them to overflow." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "readBytesFromFileInPartsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::FileFunctionsSocketClient_eventreadBytesFromFileInPartsAsync_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics
	{
		struct FileFunctionsSocketClient_eventreadStringFromFile_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			bool success;
			FString data;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventreadStringFromFile_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventreadStringFromFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventreadStringFromFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventreadStringFromFile_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventreadStringFromFile_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "readStringFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::FileFunctionsSocketClient_eventreadStringFromFile_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics
	{
		struct FileFunctionsSocketClient_eventsetReadOnly_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			bool bNewReadOnlyValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_bNewReadOnlyValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewReadOnlyValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventsetReadOnly_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventsetReadOnly_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_bNewReadOnlyValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventsetReadOnly_Parms*)Obj)->bNewReadOnlyValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_bNewReadOnlyValue = { "bNewReadOnlyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventsetReadOnly_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_bNewReadOnlyValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventsetReadOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventsetReadOnly_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_bNewReadOnlyValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "Comment", "/** Attempt to change the read only status of a file. Return true if successful. **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Attempt to change the read only status of a file. Return true if successful. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "setReadOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::FileFunctionsSocketClient_eventsetReadOnly_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics
	{
		struct FileFunctionsSocketClient_eventsetTimeStamp_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			FDateTime DateTime;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventsetTimeStamp_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventsetTimeStamp_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventsetTimeStamp_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::NewProp_DateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "Comment", "/** Sets the modification time of a file **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
		{ "ToolTip", "Sets the modification time of a file *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "setTimeStamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::FileFunctionsSocketClient_eventsetTimeStamp_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics
	{
		struct FileFunctionsSocketClient_eventstringToBase64String_Parms
		{
			FString string;
			FString base64String;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_string;
		static const UECodeGen_Private::FStrPropertyParams NewProp_base64String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventstringToBase64String_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::NewProp_base64String = { "base64String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventstringToBase64String_Parms, base64String), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::NewProp_string,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::NewProp_base64String,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "stringToBase64String", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::FileFunctionsSocketClient_eventstringToBase64String_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics
	{
		struct FileFunctionsSocketClient_eventwriteBytesToFile_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			TArray<uint8> bytes;
			bool success;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventwriteBytesToFile_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventwriteBytesToFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventwriteBytesToFile_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventwriteBytesToFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventwriteBytesToFile_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "writeBytesToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::FileFunctionsSocketClient_eventwriteBytesToFile_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics
	{
		struct FileFunctionsSocketClient_eventwriteStringToFile_Parms
		{
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString data;
			FString filePath;
			EFileFunctionsSocketClientEncodingOptions fileEncoding;
			bool success;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_fileEncoding_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_fileEncoding;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventwriteStringToFile_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventwriteStringToFile_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventwriteStringToFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_fileEncoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_fileEncoding = { "fileEncoding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsSocketClient_eventwriteStringToFile_Parms, fileEncoding), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions, METADATA_PARAMS(nullptr, 0) }; // 123313131
	void Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsSocketClient_eventwriteStringToFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsSocketClient_eventwriteStringToFile_Parms), &Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_fileEncoding_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_fileEncoding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsSocketClient, nullptr, "writeStringToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::FileFunctionsSocketClient_eventwriteStringToFile_Parms), Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileFunctionsSocketClient);
	UClass* Z_Construct_UClass_UFileFunctionsSocketClient_NoRegister()
	{
		return UFileFunctionsSocketClient::StaticClass();
	}
	struct Z_Construct_UClass_UFileFunctionsSocketClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileFunctionsSocketClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketClient,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileFunctionsSocketClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFile, "addBytesToFile" }, // 3447096331
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_addBytesToFileAndCloseIt, "addBytesToFileAndCloseIt" }, // 648319436
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToBytes, "base64StringToBytes" }, // 2611409975
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_base64StringToString, "base64StringToString" }, // 3893164545
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_bytesToBase64String, "bytesToBase64String" }, // 3974494165
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_cancelReadBytesFromFileInParts, "cancelReadBytesFromFileInParts" }, // 3922987561
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_closeFile, "closeFile" }, // 970820932
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_createDirectory, "createDirectory" }, // 3485484815
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_decryptFileWithAES, "decryptFileWithAES" }, // 2381007012
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_decryptMessageWithAES, "decryptMessageWithAES" }, // 2147155637
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_deleteDirectory, "deleteDirectory" }, // 163331935
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFile, "deleteFile" }, // 3861233845
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_deleteFileAbsolutePath, "deleteFileAbsolutePath" }, // 2895688646
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_directoryExists, "directoryExists" }, // 1846181359
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_encryptFileWithAES, "encryptFileWithAES" }, // 2090473159
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_encryptMessageWithAES, "encryptMessageWithAES" }, // 2195628111
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_fileExists, "fileExists" }, // 533525629
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_fileExistsAbsolutePath, "fileExistsAbsolutePath" }, // 2175573526
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_fileSize, "fileSize" }, // 3376320844
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_fileSizeAbsolutePath, "fileSizeAbsolutePath" }, // 2561653360
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_fileToBase64String, "fileToBase64String" }, // 4249940600
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_getAccessTimeStamp, "getAccessTimeStamp" }, // 1734734298
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_getAllFilesFromDirectory, "getAllFilesFromDirectory" }, // 2011464583
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_getFileFunctionsSocketClientTarget, "getFileFunctionsSocketClientTarget" }, // 2429751741
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_getFilenameOnDisk, "getFilenameOnDisk" }, // 720977527
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFile, "getMD5FromFile" }, // 495246361
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_getMD5FromFileAbsolutePath, "getMD5FromFileAbsolutePath" }, // 2852136049
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_getTimeStamp, "getTimeStamp" }, // 2288810732
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_int64ToString, "int64ToString" }, // 3822740110
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_isReadOnly, "isReadOnly" }, // 765792029
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_moveFile, "moveFile" }, // 47452623
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_openFile, "openFile" }, // 3328077608
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFile, "readBytesFromFile" }, // 3929474247
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_readBytesFromFileInPartsAsync, "readBytesFromFileInPartsAsync" }, // 2543460222
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_readStringFromFile, "readStringFromFile" }, // 1592420813
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_setReadOnly, "setReadOnly" }, // 4265321715
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_setTimeStamp, "setTimeStamp" }, // 1026597975
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_stringToBase64String, "stringToBase64String" }, // 3729363766
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_writeBytesToFile, "writeBytesToFile" }, // 1126013651
		{ &Z_Construct_UFunction_UFileFunctionsSocketClient_writeStringToFile, "writeStringToFile" }, // 1939779524
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileFunctionsSocketClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FileFunctionsSocketClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FileFunctionsSocketClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileFunctionsSocketClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileFunctionsSocketClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileFunctionsSocketClient_Statics::ClassParams = {
		&UFileFunctionsSocketClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileFunctionsSocketClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileFunctionsSocketClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileFunctionsSocketClient()
	{
		if (!Z_Registration_Info_UClass_UFileFunctionsSocketClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileFunctionsSocketClient.OuterSingleton, Z_Construct_UClass_UFileFunctionsSocketClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileFunctionsSocketClient.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UClass* StaticClass<UFileFunctionsSocketClient>()
	{
		return UFileFunctionsSocketClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileFunctionsSocketClient);
	UFileFunctionsSocketClient::~UFileFunctionsSocketClient() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileFunctionsSocketClient, UFileFunctionsSocketClient::StaticClass, TEXT("UFileFunctionsSocketClient"), &Z_Registration_Info_UClass_UFileFunctionsSocketClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileFunctionsSocketClient), 1444484296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_4079924917(TEXT("/Script/SocketClient"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
