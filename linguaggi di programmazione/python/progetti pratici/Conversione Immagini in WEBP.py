import os
from PIL import Image

def create_directory_if_not_exists(directory):
    if not os.path.exists(directory):
        os.makedirs(directory)

def convert_images_to_webp(input_dir, output_dir):
    create_directory_if_not_exists(input_dir)
    create_directory_if_not_exists(output_dir)

    for filename in os.listdir(input_dir):
        if filename.endswith(".png") or filename.endswith(".jpg"):
            img_path = os.path.join(input_dir, filename)
            img = Image.open(img_path)
            webp_filename = os.path.splitext(filename)[0] + ".webp"
            webp_path = os.path.join(output_dir, webp_filename)
            img.save(webp_path, "WEBP")
            print(f"Converted {filename} to {webp_filename}")

def main():
    input_dir = input("Inserisci il percorso delle immagini in entrata: ")
    output_dir = input("Inserisci il percorso per le immagini convertite: ")
    convert_images_to_webp(input_dir, output_dir)

if __name__ == "__main__":
    main()